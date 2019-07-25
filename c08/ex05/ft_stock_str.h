/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 00:49:45 by jthierry          #+#    #+#             */
/*   Updated: 2019/07/25 00:50:08 by jthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}                t_stock_str;

t_stock_str    *ft_strs_to_tab(int ac, char **av);
void        ft_show_tab(t_stock_str *par);
