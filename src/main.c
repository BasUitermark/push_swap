/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:47 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 16:50:48 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stacklists stacks)
{
	free(stacks.stack_a);
	free(stacks.stack_b);
	free(stacks.index_a);
	free(stacks.index_b);
}

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
	stacks->index_a = ft_calloc(argc, sizeof(int));
	stacks->index_b = ft_calloc(argc, sizeof(int));
	stacks->size_a = argc;
	stacks->size_b = 0;
}

int	main(int argc, char const **argv)
{
	t_stacklists	stacks;
	int				exec;

	input_check(argc, argv);
	init_stacks(&stacks, argc - 1);
	input_parser(&argv[1], stacks);
	exec = push_swap(&stacks);
	free_stacks(stacks);
	exit(EXIT_SUCCESS);
}
