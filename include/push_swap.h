/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:57 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 18:55:17 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/include/libft.h"
# include <stdio.h>
# include <errno.h>

typedef struct s_stacklists
{
	t_dlist	*stack_a;
	t_dlist	*stack_b;
	int		size;
}	t_stacklists;

int		main(int argc, char const **argv);
void	error(char *error_msg);
bool	input_check(int argc, const char **argv);
t_dlist	*input_parser(const char **argv);

#endif