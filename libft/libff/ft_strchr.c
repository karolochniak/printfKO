/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:52:38 by kochniak          #+#    #+#             */
/*   Updated: 2025/10/02 22:34:26 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int z)
{
	unsigned int	i;
	char			znak;

	i = 0;
	znak = (char) z;
	while (str[i] != '\0')
	{
		if (str[i] == znak)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == znak)
		return ((char *)&str[i]);
	return (NULL);
}
