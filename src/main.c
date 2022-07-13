/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:47 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/13 17:21:45 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_printdlst_i(t_dlist_i *list)
{
	while (list != NULL)
	{
		ft_printf("%d\n", list->num);
		list = list->next;
	}
}

int	main(int argc, char const **argv)
{
	t_stacklists	stacks;

	input_check(argc, argv);
	stacks.stack_a = input_parser(argv, &stacks.size);
	stacks.stack_b = NULL;
	swap(&stacks.stack_a);
	// swap_all(stacks.stack_a, stacks.stack_b);
	// push(&stacks.stack_a, &stacks.stack_b);
	// push(&stacks.stack_a, &stacks.stack_b);
	printf("Stack 1\n");
	ft_printdlst_i(stacks.stack_a);
	printf("Stack 2\n");
	ft_printdlst_i(stacks.stack_b);
	exit(EXIT_SUCCESS);
}
