/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:21:56 by kochniak          #+#    #+#             */
/*   Updated: 2025/10/06 21:24:21 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	int		i;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	final = malloc(size_s1 + 1 + size_s2);
	if (!final)
		return (NULL);
	while (++i < size_s1)
		final[i] = s1[i];
	i = 0;
	while (i < size_s2)
	{
		final[size_s1 + i] = s2[i];
		i++;
	}
	final[size_s2 + size_s1] = '\0';
	return (final);
}
