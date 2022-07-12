/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parser.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:53 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/12 15:10:56 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_freedlst_i(t_dlist_i *list)
{
	//free shit here
}

static t_dlist_i	*ft_fill_dlist(const char **input, int *size)
{
	t_dlist_i	*stack_a;
	t_dlist_i	*new;
	size_t		i;

	i = 1;
	stack_a = NULL;
	while (input[i])
	{
		new = ft_dlstnew_i(ft_atoi(input[i]));
		if (!new)
		{
			// if (!stack_a)
			// 	ft_freedlst_i(stack_a);
			error("Failed to create list!");
		}
		ft_dlstadd_back_i(&stack_a, new);
		*size += 1;
		i++;
	}
	return (stack_a);
}

t_dlist_i	*input_parser(const char **argv, int	*size)
{
	t_dlist_i	*stack_a;

	stack_a = ft_fill_dlist(argv, size);
	return (stack_a);
}
