/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:49:19 by buiterma      #+#    #+#                 */
/*   Updated: 2022/10/03 13:59:25 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_lowest(int index, t_stacklists *stacks, int *stack_a)
{
	size_t	i;
	int		exec;

	i = 0;
	exec = 0;
	if (index < stacks->size_a / 2)
	{
		while (i < index)
		{
			exec += rotate_a(stacks);
			i++;
		}
	}
	else
	{
		while (index < stacks->size_a)
		{
			exec += reverse_rotate_a(stacks);
			index++;
		}
	}
	exec += push_b(stacks);
	return (exec);
}

int	find_lowest(t_stacklists *stacks, int *stack_a)
{
	size_t	i;
	size_t	index;
	int		min;
	int		exec;

	i = 0;
	exec = 0;
	index = 0;
	min = stacks->stack_a[0];
	while (i < stacks->size_a)
	{
		if (stacks->stack_a[i] < min)
		{
			min = stacks->stack_a[i];
			index = i;
		}
		i++;
	}
	exec = push_lowest(index, stacks, stack_a);
	return (exec);
}
