/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 16:15:26 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 12:15:04 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(int *src, int *dest, int size_src, int size_dest)
{
	int	i;
	int	len;

	i = 0;
	len = size_dest;
	if (size_dest)
	{
		while (len > 0)
		{
			dest[len] = dest[len - 1];
			len--;
		}
	}
	dest[i] = src[i];
	while (i < size_src)
	{
		src[i] = src[i + 1];
		i++;
	}
	src[i - 1] = 0;
}

int	push_a(t_stacklists *stacks)
{
	ft_printf("pa\n");
	push(stacks->stack_b, stacks->stack_a, stacks->size_b, stacks->size_a);
	push(stacks->index_b, stacks->index_a, stacks->size_b, stacks->size_a);
	stacks->size_a += 1;
	stacks->size_b -= 1;
	return (1);
}

int	push_b(t_stacklists *stacks)
{
	ft_printf("pb\n");
	push(stacks->stack_a, stacks->stack_b, stacks->size_a, stacks->size_b);
	push(stacks->index_a, stacks->index_b, stacks->size_a, stacks->size_b);
	stacks->size_a -= 1;
	stacks->size_b += 1;
	return (1);
}
