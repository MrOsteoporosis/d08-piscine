/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_param_to_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/21 14:24:11 by averheij       #+#    #+#                */
/*   Updated: 2019/09/21 14:52:48 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

char	*ft_strdup2(char *src, int length)
{
	char	*cpy;
	int		i;

	cpy = (char*)malloc(sizeof(cpy) * (length + 1));
	i = 0;
	while (i < length)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*boxes;
	int				i;
	int				size;

	boxes = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		size = 0;
		while (av[i][size])
			size++;
		boxes[i].size_param = size;
		boxes[i].str = (char*)malloc(sizeof(char) * (size + 1));
		boxes[i].str = av[i];
		boxes[i].copy = ft_strdup2(av[i], size);
		boxes[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	boxes[i].str = 0;
	return (boxes);
}
