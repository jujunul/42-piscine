/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:35:38 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/25 00:53:36 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_stock_str.h"

#include <stdlib.h>

char					*ft_strdup(char *src)
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

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					j;
	struct s_stock_str	*tab;

	j = 0;
	if (!(tab = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1)))
		return (NULL);
	while (j < ac)
	{
		tab[j].str = av[j];
		tab[j].size = ft_strlen(av[j]);
		tab[j].copy = ft_strdup(av[j]);
		j++;
	}
	tab[j].str = 0;
	return (tab);
}


int main(int ac, char **av)
{
	t_stock_str *str;


	str = ft_strs_to_tab(ac, av);
	av[0][0] = 'h';
	av[0][1] = 'e';
	av[0][2] = 'l';
	av[0][3] = 'l';
	av[0][4] = 'o';
	av[0][5] = 'o';
	av[0][6] = 'o';
	ft_show_tab(str);
	return (0);
}
