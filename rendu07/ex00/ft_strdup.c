/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:22:27 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/16 17:33:31 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		len;
	char	*cpy;

	len = 0;
	if (!src)
		return (0);
	while (src[len])
		len++;
	if (!(cpy = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	len = 0;
	while (src[len])
	{
		cpy[len] = src[len];
		len++;
	}
	cpy[len] = '\0';
	return (cpy);
}
