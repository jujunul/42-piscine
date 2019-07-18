/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:48:22 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/12 04:43:07 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void	 ft_putchar(char c) 
{
	write(1, &c, 1);
}

void	ft_putstr(char c)
{
	
}

int		main(void)
{
	char	str[110] = "salut tout le monde putain";
	char	st[110] = "salut tout le monde putain";

	printf("%d\n", ft_strlcat(str, "salut test", 5));
	printf("%d\n", strlcat(st, "salut test", 5));
	printf("%s\n", str);
	printf("%s\n", st);
}
