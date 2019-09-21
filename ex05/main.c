/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/21 14:31:08 by averheij       #+#    #+#                */
/*   Updated: 2019/09/21 14:32:13 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

int					main(int argc, char **argv)
{
	ft_param_to_tab(argc, argv);
}
