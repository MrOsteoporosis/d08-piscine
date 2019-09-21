/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_boolean.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/21 13:24:09 by averheij       #+#    #+#                */
/*   Updated: 2019/09/21 13:49:04 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 		1
# define FALSE		0
# define EVEN_MSG	"I have an even number of arguments."
# define ODD_MSG	"I have an odd number of arguments."
# define SUCCESS	1

typedef	enum
{
	istrue,
	isfalse
}	t_bool;
#endif
