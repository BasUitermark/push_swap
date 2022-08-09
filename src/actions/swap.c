/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 16:40:13 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 16:19:59 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(int *stack)
{
	int	temp;

	if (stack[1] == 0)
		return (0);
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	return (1);
}

void	swap_a(t_stacklists stacks)
{
	ft_printf("sa\n");
	swap(stacks.stack_a);
}

void	swap_b(t_stacklists stacks)
{
	ft_printf("sb\n");
	swap(stacks.stack_b);
}

void	swap_all(t_stacklists stacks)
{
	ft_printf("ss\n");
	swap(stacks.stack_a);
	swap(stacks.stack_b);
}
