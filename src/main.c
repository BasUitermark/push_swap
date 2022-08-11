/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:47 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 15:41:03 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printiarray(int *array, int size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_printf("%d\n", array[i]);
		i++;
	}
	write(1, "\n", 1);
}

static void	init_stacks(t_stacklists *stacks, int argc)
{
	stacks->stack_a = ft_calloc(argc, sizeof(int));
	stacks->stack_b = ft_calloc(argc, sizeof(int));
	stacks->size_a = argc;
	stacks->size_b = 0;
}

int	main(int argc, char const **argv)
{
	t_stacklists	stacks;

	input_check(argc, argv);
	init_stacks(&stacks, argc - 1);
	input_parser(&argv[1], stacks);
	push_swap(&stacks);
	ft_printiarray(stacks.stack_a, stacks.size_a);
	// ft_printiarray(stacks.stack_b, stacks.size_b);
	exit(EXIT_SUCCESS);
}
