/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/09 15:05:54 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 08:35:29 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	check_sort(t_stacklists *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->size_a)
	{
		if (stacks->stack_a[i] > stacks->stack_a[i + 1])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
static int	radix_sort(t_stacklists *stacks)
{
	int	exec;
	int	i;
	int	index;
	int	size;

	size = stacks->size_a;
	exec = 0;
	while (!is_sorted(stacks))
	{
		i = 0;
		while (i < size)
		{
			if ((stacks->stack_a[0] >> index) & 1)
				exec += rotate_a(stacks);
			else
				exec += push_b(stacks);
			i++;
		}
		while (stacks->size_b > 0)
			exec += push_a(stacks);
		index++;
	}
	return (exec);
}

int	push_swap(t_stacklists *stacks)
{
	int	exec;

	exec = 0;
	if (check_sort(stacks))
		return (0);
	if (stacks->size_a == 2)
		exec = sort_two(stacks);
	else if (stacks->size_a == 3)
		exec = sort_three(stacks, stacks->stack_a);
	else if (stacks->size_a == 4)
		exec = sort_four(stacks, stacks->stack_a);
	else if (stacks->size_a == 5)
		exec = sort_five(stacks, stacks->stack_a);
	else
		exec = radix_sort(stacks);
	return (exec);
}
