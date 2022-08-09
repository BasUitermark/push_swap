/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 16:15:26 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 16:16:44 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(int *src, int *dest, int size)
{
	int	i;
	int	len;

	i = 0;
	len = size;
	if (dest[0])
	{
		while (len > 0)
		{
			dest[len] = dest[len - 1];
			len--;
		}
	}
	dest[i] = src[i];
	while (i < size)
	{
		src[i] = src[i + 1];
		i++;
	}
	src[i - 1] = 0;
}

void	push_a(t_stacklists stacks)
{
	ft_printf("pa\n");
	push(stacks.stack_b, stacks.stack_a, stacks.size);
}

void	push_b(t_stacklists stacks)
{
	ft_printf("pb\n");
	push(stacks.stack_a, stacks.stack_b, stacks.size);
}
