/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 21:58:10 by kochniak          #+#    #+#             */
/*   Updated: 2025/10/09 14:46:23 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int				length;
	char						*d;
	unsigned int				i;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	i = 0;
	if (start >= length)
		return (ft_strdup(""));
	if (start + len > length)
		len = length - start;
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	while (len-- > 0)
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}
