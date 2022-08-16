/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/09 14:57:39 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 12:15:45 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(int *stack, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack[size - 1];
	while (size > 0)
	{
		stack[size] = stack[size - 1];
		size--;
	}
	stack[0] = temp;
}

int	reverse_rotate_a(t_stacklists *stacks)
{
	ft_printf("rra\n");
	reverse_rotate(stacks->stack_a, stacks->size_a);
	reverse_rotate(stacks->index_a, stacks->size_a);
	return (1);
}

int	reverse_rotate_b(t_stacklists *stacks)
{
	ft_printf("rrb\n");
	reverse_rotate(stacks->stack_b, stacks->size_b);
	reverse_rotate(stacks->index_b, stacks->size_b);
	return (1);
}

int	reverse_rotate_all(t_stacklists *stacks)
{
	ft_printf("rrr\n");
	reverse_rotate(stacks->stack_a, stacks->size_a);
	reverse_rotate(stacks->stack_b, stacks->size_b);
	reverse_rotate(stacks->index_a, stacks->size_a);
	reverse_rotate(stacks->index_b, stacks->size_b);
	return (1);
}
