/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimalwrite copy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:48:51 by kochniak          #+#    #+#             */
/*   Updated: 2025/11/22 10:39:18 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	odwroc_napis(char *str)
{
	int		n;
	char	temp;
	int		i;

	n = ft_strlen(str);
	i = 0;
	while (i < n / 2)
	{
		temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
		i++;
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	na_szesnastkowy_d(unsigned long liczba)
{
	int				i;
	unsigned int	reszta;
	const char		*znaki;
	char			bufor[sizeof(unsigned long) * 2 + 1];

	i = 0;
	znaki = "0123456789ABCDEF";
	if (liczba == 0)
	{
		ft_putstr_fd("0", 1);
		return (1);
	}
	while (liczba > 0)
	{
		reszta = (unsigned int)(liczba % 16UL);
		bufor[i++] = znaki[reszta];
		liczba = liczba / 16UL;
	}
	bufor[i] = '\0';
	return (odwroc_napis(bufor));
}
