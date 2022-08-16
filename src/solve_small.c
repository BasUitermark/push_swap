/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   solve_small.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/15 14:37:05 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 11:14:36 by buiterma      ########   odam.nl         */
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

/**
 * 1 234
 * 2 134
 * 3 124
 * 4 123
 */
int	sort_four(t_stacklists *stacks, int *stack_a)
{
	int	exec;

	exec = push_b(stacks);
	exec += sort_three(stacks, stacks->stack_a);
	exec += push_a(stacks);
	if (check_sort(stacks))
		return (exec);
	stack_a = stacks->stack_a;
	if (stack_a[0] < stack_a[2])
		exec += swap_a(stacks);
	else if (stack_a[0] < stack_a[3])
	{
		exec += reverse_rotate_a(stacks);
		exec += swap_a(stacks);
		exec += rotate_a(stacks);
		exec += rotate_a(stacks);
	}
	else
		rotate_a(stacks);
	return (exec);
}

/**
 * 1 2345
 * 2 1345
 * 3 1245
 * 4 1235
 * 5 1234
 */
static int	sort_five_high(t_stacklists *stacks, int *stack_a)
{
	int	exec;

	if (stacks->stack_b[0] < stack_a[3])
	{
		exec = reverse_rotate_a(stacks);
		exec += push_a(stacks);
		exec += rotate_a(stacks);
		exec += rotate_a(stacks);
	}
	else
	{
		exec = push_a(stacks);
		exec += rotate_a(stacks);
	}
	return (exec);
}

int	sort_five(t_stacklists *stacks, int *stack_a)
{
	int	exec;

	exec = push_b(stacks);
	exec += sort_four(stacks, stack_a);
	stack_a = stacks->stack_a;
	if (stacks->stack_b[0] < stack_a[1])
	{
		exec += push_a(stacks);
		exec += swap_a(stacks);
	}
	else if (stacks->stack_b[0] < stack_a[2])
	{
		exec += reverse_rotate_a(stacks);
		exec += reverse_rotate_a(stacks);
		exec += push_a(stacks);
		exec += reverse_rotate_a(stacks);
		exec += reverse_rotate_a(stacks);
	}
	else if (stacks->stack_b[0] < stack_a[3])
		exec += sort_five_high(stacks, stack_a);
	return (exec);
}
