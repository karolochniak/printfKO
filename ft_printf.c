/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:59:47 by kochniak          #+#    #+#             */
/*   Updated: 2025/11/22 10:38:38 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checking(const char *str, va_list argh)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar_fd((char)va_arg(argh, int), 1);
	else if (*str == 's')
		count += ft_putstr_fd(va_arg(argh, char *), 1);
	else if (*str == 'd' || *str == 'i')
		count += ft_putnbr_fd(va_arg(argh, int), 1);
	else if (*str == '%')
	{
		write(1, "%", 1);
		count += 1;
	}
	else if (*str == 'u')
		count += ft_putunbr_fd(va_arg(argh, unsigned int), 1);
	else if (*str == 'p')
		count += printpointer(argh);
	else if (*str == 'x')
		count += na_szesnastkowy((unsigned long)va_arg(argh, unsigned int));
	else if (*str == 'X')
		count += na_szesnastkowy_d((unsigned long)va_arg(argh, unsigned int));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	argumenty;
	int		counter;
	int		tmp;

	counter = 0;
	if (!str)
		return (0);
	va_start(argumenty, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			tmp = checking(str, argumenty);
			counter += tmp;
			str++;
		}
		else
		{
			counter += ft_putchar_fd(*str, 1);
			str++;
		}
	}
	va_end(argumenty);
	return (counter);
}
