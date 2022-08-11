/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:57 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 16:22:44 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/include/libft.h"
# include <stdio.h>
# include <errno.h>
# include <limits.h>

typedef struct s_stacklists
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
}	t_stacklists;

int		main(int argc, char const **argv);
void	error(char *error_msg);
void	input_check(int argc, const char **argv);
void	input_parser(const char **argv, t_stacklists stacks);
void	push_swap(t_stacklists *stacks);

int		push_a(t_stacklists *stacks);
int		push_b(t_stacklists *stacks);

int		swap_a(t_stacklists *stacks);
int		swap_b(t_stacklists *stacks);
int		swap_all(t_stacklists *stacks);

int		rotate_a(t_stacklists *stacks);
int		rotate_b(t_stacklists *stacks);
int		rotate_all(t_stacklists *stacks);

int		reverse_rotate_a(t_stacklists *stacks);
int		reverse_rotate_b(t_stacklists *stacks);
int		reverse_rotate_all(t_stacklists *stacks);

void	ft_printiarray(int *array, int size);
#endif