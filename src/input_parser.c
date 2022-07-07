/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parser.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:53 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 18:55:57 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_dlist	*ft_fill_dlist(const char **input)
{
	t_dlist	*stack_a;
	int		num;
	size_t	i;

	i = 0;
	while (input[i])
	{
		num = ft_atoi(input[i]);
		ft_dlstadd_back(&stack_a, ft_dlstnew(&num));
		i++;
	}
	return (stack_a);
}

t_dlist	*input_parser(const char **argv)
{
	t_dlist	*stack_a;

	stack_a = ft_fill_dlist(argv);
	return (stack_a);
}
