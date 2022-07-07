/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:47 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 18:54:59 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const **argv)
{
	t_stacklists	stacks;

	if (!input_check(argc, argv))
		error("Received incorrect input!");
	stacks.stack_a = input_parser(argv);

	exit(EXIT_SUCCESS);
}
