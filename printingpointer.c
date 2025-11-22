/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printingpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 08:42:09 by kochniak          #+#    #+#             */
/*   Updated: 2025/11/22 10:45:17 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printpointer(va_list arg)
{
	void			*p;
	unsigned long	ptr_address;
	int				count;

	p = va_arg(arg, void *);
	ptr_address = (unsigned long)p;
	if (!ptr_address)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	count = 2;
	count += na_szesnastkowy(ptr_address);
	return (count);
}
