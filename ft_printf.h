/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:59:43 by kochniak          #+#    #+#             */
/*   Updated: 2025/11/21 16:32:43 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
int checking(const char *str, va_list arg);
int hexadecimalwrite(va_list arg , char option);
int printpointer(va_list arg);
#endif