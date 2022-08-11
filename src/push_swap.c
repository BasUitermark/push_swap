/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/09 15:05:54 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 16:23:39 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	sort_two(t_stacklists *stacks)
{
	if (stacks->stack_a[0] > stacks->stack_a[1])
		return (swap_a(stacks));
	return (0);
}
/**
 * 2 < 0	-> rra
 * 0 > 1	-> sa
 * 1 > 2	-> rra + sa
 * 
 * 0 > 1	-> sa
 * 1 > 2	-> 3/1 3/2
 * 2 > 0
*/
static int	sort_three(t_stacklists *stacks)
{
	int	exec;

	exec = 0;

	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[0] > stacks->stack_a[2])
		exec += rotate_a(stacks);
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] < stacks->stack_a[2])
		exec += swap_a(stacks);
	if (stacks->stack_a[0] > stacks->stack_a[1] && stacks->stack_a[1] > stacks->stack_a[2])
	{
		exec += swap_a(stacks);
		exec += reverse_rotate_a(stacks);
	}
	if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[1] > stacks->stack_a[2])
	{
		exec += swap_a(stacks);
		exec += rotate_a(stacks);
	}
	if (stacks->stack_a[0] < stacks->stack_a[1] && stacks->stack_a[0] < stacks->stack_a[2])
	return (exec);
}

static int sort_five(t_stacklists *stacks)
{
	int exec;

	exec = 0;
	exec += push_b(stacks);
	exec += push_b(stacks);
	exec += sort_three(stacks);
	exec += push_a(stacks);
}

//if number > last number 					-> rra
//if number > second number < than third	-> sa
// if number > third number < than fourth	-> sa, pb, sa, pa


void	push_swap(t_stacklists *stacks)
{
	int	exec;

	exec = 0;
	if (stacks->size_a == 2)
		exec = sort_two(stacks);
	if (stacks->size_a == 3)
		exec = sort_three(stacks);
	if (stacks->size_a == 5)
		exec = sort_five(stacks);
	ft_printf("Moves: %d\n\n", exec);
}
