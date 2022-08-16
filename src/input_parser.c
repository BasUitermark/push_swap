/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parser.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:53 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 16:53:21 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			{
				free_stacks(stacks);
				error("Error");
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

static void	get_index(t_stacklists stacks)
{
	int	i;
	int	j;
	int	min;
	int	num;

	i = 0;
	num = stacks.stack_a[0];
	while (i < stacks.size_a)
	{
		j = 0;
		while (j < stacks.size_a)
		{
			if (stacks.stack_a[j] > num)
				stacks.index_a[j] += 1;
			j++;
		}
		i++;
		num = stacks.stack_a[i];
	}
}

void	input_parser(const char **argv, t_stacklists stacks)
{
	long	num;
	size_t	i;

	i = 0;
	while (argv[i])
	{
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			free_stacks(stacks);
		stacks.stack_a[i] = num;
		i++;
	}
	check_duplicates(stacks, stacks.size_a);
	get_index(stacks);
}
