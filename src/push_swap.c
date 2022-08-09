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

static void	sort_two(t_stacklists stacks)
{
	if (stacks.stack_a[0] > stacks.stack_a[1])
		swap_a(stacks);
}

static void	sort_three(t_stacklists stacks)
{
	if (stacks.stack_a[0] > stacks.stack_a[1])
		swap_a(stacks);
	if (stacks.stack_a[1] > stacks.stack_a[2])
	{
		push_b(stacks);
		swap_a(stacks);
		push_a(stacks);
	}
	if (stacks.stack_a[0] > stacks.stack_a[1])
		swap_a(stacks);
}

void	push_swap(t_stacklists stacks)
{
	if (stacks.size == 2)
		sort_two(stacks);
	if (stacks.size == 3)
		sort_three(stacks);
}
