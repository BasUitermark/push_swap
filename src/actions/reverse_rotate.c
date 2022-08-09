/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/09 14:57:39 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 16:22:23 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(int *stack, int size)
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

void	reverse_rotate_a(t_stacklists stacks)
{
	ft_printf("rra");
	reverse_rotate(stacks.stack_a, stacks.size);
}

void	reverse_rotate_b(t_stacklists stacks)
{
	ft_printf("rrb");
	reverse_rotate(stacks.stack_b, stacks.size);
}

void	reverse_rotate_all(t_stacklists stacks)
{
	ft_printf("rrr");
	reverse_rotate(stacks.stack_a, stacks.size);
	reverse_rotate(stacks.stack_b, stacks.size);
}
