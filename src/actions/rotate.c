/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 18:02:10 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 16:20:33 by buiterma      ########   odam.nl         */
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

void	rotate_a(t_stacklists stacks)
{
	ft_printf("ra\n");
	rotate(stacks.stack_a, stacks.size);
}

void	rotate_b(t_stacklists stacks)
{
	ft_printf("rb\n");
	rotate(stacks.stack_b, stacks.size);
}

void	rotate_all(t_stacklists stacks)
{
	ft_printf("rr\n");
	rotate(stacks.stack_a, stacks.size);
	rotate(stacks.stack_b, stacks.size);
}
