/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:48:13 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/20 18:05:42 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_parsing(char *dic)
{
	int fd;
	
	fd = open(dic, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	ft_read_dict(fd);
}


int		main(int ac, char **av)
{
	if (ac == 2)
	{
		value = av[1];
		ft_doshit;
	}
	else if (ac == 3)
	{
		ft_parsing(av[1]);
		value = av[2];
	}
	else
	{
		ft_putstr("wrong argument");
		return (0);
	}
}
