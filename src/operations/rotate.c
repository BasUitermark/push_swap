/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 18:02:10 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 12:16:17 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(int *stack, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack[0];
	while (i < size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i - 1] = temp;
}

int	rotate_a(t_stacklists *stacks)
{
	ft_printf("ra\n");
	rotate(stacks->stack_a, stacks->size_a);
	rotate(stacks->index_a, stacks->size_a);
	return (1);
}

int	rotate_b(t_stacklists *stacks)
{
	ft_printf("rb\n");
	rotate(stacks->stack_b, stacks->size_b);
	rotate(stacks->index_b, stacks->size_b);
	return (1);
}

int	rotate_all(t_stacklists *stacks)
{
	ft_printf("rr\n");
	rotate(stacks->stack_a, stacks->size_a);
	rotate(stacks->stack_b, stacks->size_b);
	rotate(stacks->index_a, stacks->size_a);
	rotate(stacks->index_b, stacks->size_b);
	return (1);
}
