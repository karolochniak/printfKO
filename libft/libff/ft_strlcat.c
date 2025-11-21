/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:29:15 by kochniak          #+#    #+#             */
/*   Updated: 2025/10/11 13:03:31 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sized;
	size_t	sizes;
	size_t	i;

	i = 0;
	sized = ft_strlen(dst);
	sizes = ft_strlen(src);
	if (size <= sized)
		return (sizes + size);
	while (src[i] && i < size - sized - 1)
	{
		dst[sized + i] = src[i];
		i++;
	}
	dst[sized + i] = '\0';
	return (sized + sizes);
}
