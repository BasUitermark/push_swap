/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:57 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 16:55:43 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/include/libft.h"

typedef struct s_stacklists
{
	t_dlist	*stack_a;
	t_dlist	*stack_b;
	int		size;
}	t_stacklists;

bool			input_check(int argc, char **argv);
t_stacklists	input_process(int argc, char **argv);

#endif