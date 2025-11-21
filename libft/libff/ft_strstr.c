/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:32:14 by kochniak          #+#    #+#             */
/*   Updated: 2025/10/02 23:05:24 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;

	if (!str2[0])
		return ((char *)str1);
	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str1[i + j] && str2[j] && str1[i + j] == str2[j])
			j++;
		if (str2[j] == '\0')
			return ((char *)&str1[i]);
		i++;
	}
	return (NULL);
}
