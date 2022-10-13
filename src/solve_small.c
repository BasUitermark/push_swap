/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solve_small.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:37:05 by buiterma      #+#    #+#                 */
/*   Updated: 2022/10/03 14:36:57 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_two(t_stacklists *stacks)
{
	if (stacks->stack_a[0] > stacks->stack_a[1])
		return (swap_a(stacks));
	return (0);
}

int	sort_three(t_stacklists *stacks, int *stack_a)
{
	int	exec;

	if (check_sort(stacks))
		return (0);
	if (stack_a[0] < stack_a[1] && stack_a[1] < stack_a[2])
		return (0);
	if (stack_a[0] < stack_a[1] && stack_a[0] < stack_a[2])
	{
		exec = swap_a(stacks);
		exec += rotate_a(stacks);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[0] < stack_a[2])
		exec = swap_a(stacks);
	else if (stack_a[0] < stack_a[1] && stack_a[0] > stack_a[2])
		exec = reverse_rotate_a(stacks);
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2])
		exec = rotate_a(stacks);
	else
	{
		exec = swap_a(stacks);
		exec += reverse_rotate_a(stacks);
	}
	return (exec);
}

int	sort_four(t_stacklists *stacks, int *stack_a)
{
	int	exec;

	if (check_sort(stacks))
		return (0);
	exec = find_lowest(stacks, stacks->stack_a);
	exec += sort_three(stacks, stack_a);
	exec += push_a(stacks);
	return (0);
}

int	sort_five(t_stacklists *stacks, int *stack_a)
{
	int	exec;

	if (check_sort(stacks))
		return (0);
	exec = find_lowest(stacks, stacks->stack_a);
	exec += sort_four(stacks, stack_a);
	exec += push_a(stacks);
	return (exec);
}
