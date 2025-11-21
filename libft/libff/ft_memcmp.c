/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:10:48 by kochniak          #+#    #+#             */
/*   Updated: 2025/10/02 22:39:07 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*str;
	unsigned char	*ch;
	size_t			i;

	str = (unsigned char *)ptr1;
	ch = (unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
		if (str[i] != ch[i])
			return (str[i] - ch[i]);
		i++;
	}
	return (0);
}
