/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 10:22:01 by kochniak          #+#    #+#             */
/*   Updated: 2025/11/22 10:39:04 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putchar_fd(char c, int fd)
{
	if (write(fd, &c, 1) < 0)
		return (0);
	return (1);
}

int	ft_putstr_fd(const char *s, int fd)
{
	int	len;

	if (!s)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	len = 0;
	while (s[len])
		len++;
	if (len > 0)
		write(fd, s, len);
	return (len);
}

int	ft_putendl_fd(const char *s, int fd)
{
	int	n;

	n = ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
	return (n + 1);
}

int	ft_putnbr_fd(int nb, int fd)
{
	long	n;
	int		count;

	n = nb;
	count = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		count = 1;
	}
	count += ft_putunbr_fd((unsigned int)n, fd);
	return (count);
}

int	ft_putunbr_fd(unsigned int nb, int fd)
{
	char			buf[11];
	unsigned long	n;
	int				i;
	int				len;

	n = nb;
	i = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		buf[i++] = '0' + (char)(n % 10);
		n /= 10;
	}
	len = i;
	while (i-- > 0)
		write(fd, &buf[i], 1);
	return (len);
}
