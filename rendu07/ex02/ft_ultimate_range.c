/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:54:48 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/22 23:23:06 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int mini;

	mini = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(int) * ((max - min) + 1))))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - mini);
}
