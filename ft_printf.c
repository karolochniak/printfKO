/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:59:47 by kochniak          #+#    #+#             */
/*   Updated: 2025/11/21 16:53:10 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int checking(const char *str, va_list argh)
{
	if (*str == 'c')
		ft_putchar_fd(va_arg (argh, char) , 1);
	if (*str == 's')
		ft_putstr_fd(va_arg (argh, char *), 1);
	if (*str == 'd' || *str == 'i')
		ft_putnbr_fd(va_arg(argh, int), 1);
	if (*str == '%')
		write(1, "%",1);
	if (*str == 'u')
		ft_putnbr_fd(va_arg(argh, unsigned int), 1);
	if (*str == 'p')
		printpointer(va_arg(argh, void *));
	if (*str == 'x')
		hexadecimalwrite(va_arg(argh, int), 'x');
	if (*str == 'X')
		hexadecimalwrite(va_arg(argh, int), 'X');
	return (0);
}
int ft_printf(const char *str, ...)
{
	va_list	argumenty;
	int		counter;
	
	counter = 0;
	if (!str)
		return (0);
	va_start(argumenty,str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			checking((char *) str, argumenty);
			str++;
		}
		else
			{
				ft_putchar_fd(*str, 1);
				str++;
				counter++;
			}	
	}
	return (counter);
}

int main (void)
{
	ft_printf("Kot i %s kociak pierdolec %%, %d", "pies", 42);
	return (0);
}