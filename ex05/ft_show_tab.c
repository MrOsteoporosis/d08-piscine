/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_show_tab.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/21 14:53:48 by averheij       #+#    #+#                */
/*   Updated: 2019/09/21 15:14:25 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		a;

	a = 0;
	while (par[a].str)
	{
		ft_putstr(par[a].copy);
		ft_putnbr(par[a].size_param);
		ft_putchar('\n');
		i = 0;
		while (par[a].tab[i])
			ft_putstr(par[a].tab[i++]);
		a++;
	}
}
