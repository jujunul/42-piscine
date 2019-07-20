/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:45:45 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/20 17:42:37 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int			ft_biglen(int size, char **strs, char *sep)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;
	unsigned int lensep;

	i = 0;
	len = 0;
	lensep = 0;
	while (sep[lensep])
		lensep++;
	while (i < (unsigned int)size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		i++;
		if (i != (unsigned int)size)
			len = len + lensep;
	}
	return (len);
}

char					*ft_strcat(char *dest, char *src)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (dest[len])
		len++;
	while (src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}

char					*ft_strjoin(int size, char **strs, char *sep)
{
	char			*result;
	unsigned int	len;
	unsigned int	j;

	j = 0;
	len = ft_biglen(size, strs, sep);
	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char) * 1);
		return (result);
	}
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (j < len)
		result[j++] = '\0';
	j = 0;
	while (j < (unsigned int)size)
	{
		ft_strcat(result, strs[j]);
		j++;
		if (j < (unsigned int)size)
			ft_strcat(result, sep);
	}
	return (result);
}
