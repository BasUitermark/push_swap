/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parser.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:53 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 17:18:38 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/**
 * Converts and fills an int array with the specified values.
 * @param input The strings to be converted.
 * @param length The length of the array
 * @return The filled array or 0 if there were no values detected;
 */
// static int	*ft_fill_iarray(char **input, size_t length)
// {
// 	int	*array;
// 	int	i;

// 	i = 0;
// 	array = ft_calloc(length, sizeof(int));
// 	if (length == 0 || !input[0])
// 		return (0);
// 	while (i < length)
// 	{
// 		array[i] = ft_atoi(input[i]);
// 		i++;
// 	}
// 	return (array);
// }

static t_dlist	ft_fill_dlist(char **input, size_t length)
{
	
}

t_dlist	input_parser(int argc, char **argv)
{
	t_stacklists	stacks;

	stacks.stack_a = ft_fill_dlist(argv, )
	return (stacks);
}
