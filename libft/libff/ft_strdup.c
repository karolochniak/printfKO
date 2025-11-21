/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kochniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 22:28:11 by kochniak          #+#    #+#             */
/*   Updated: 2025/10/03 22:57:38 by kochniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*kopia;

	i = 0;
	while (src[i])
	{
		i++;
	}
	kopia = (char *)malloc(sizeof(*kopia) * i + 1);
	if (kopia == NULL)
		return (kopia);
	i = 0;
	while (src[i])
	{
		kopia[i] = src[i];
		i++;
	}
	kopia[i] = '\0';
	return (kopia);
}
