/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:10:07 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/25 00:56:40 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"
void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	int		i;
	char	*mem;

	i = 0;
	mem = str;
	while (*str)
	{
		i++;
		str++;
	}
	write(1, mem, i);
}

void			ft_putnbr(int nb)
{
	long	n;
	int		d;

	d = 1000000000;
	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	while (d > 0)
	{
		if (n >= d)
			ft_putchar('0' + (n / d % 10));
		d /= 10;
	}
}

void			ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
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
