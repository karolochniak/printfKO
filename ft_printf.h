/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:59:43 by kochniak          #+#    #+#             */
/*   Updated: 2025/11/22 10:47:34 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		checking(const char *str, va_list arg);
int		na_szesnastkowy(unsigned long liczba);
int		na_szesnastkowy_d(unsigned long liczba);
int		printpointer(va_list arg);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(const char *s, int fd);
int		ft_putendl_fd(const char *s, int fd);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putunbr_fd(unsigned int nb, int fd);
size_t	ft_strlen(const char *str);

#endif