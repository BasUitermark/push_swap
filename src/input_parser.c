/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parser.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:53 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 17:01:05 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_arrays(t_stacklists stacks)
{
	free(stacks.stack_a);
	free(stacks.stack_b);
	error("Error");
}

static void	check_duplicates(t_stacklists stacks, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stacks.stack_a[i] == stacks.stack_a[j])
				free_arrays(stacks);
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	input_parser(const char **argv, t_stacklists stacks)
{
	size_t	i;

	i = 0;
	while (argv[i])
	{
		stacks.stack_a[i] = ft_atoi(argv[i]);
		if (stacks.stack_a[i] > INT_MAX)
			free_arrays(stacks);
		i++;
	}
	check_duplicates(stacks, stacks.size);
}
