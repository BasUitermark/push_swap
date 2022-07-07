/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:47 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 17:14:39 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const **argv)
{
	t_stacklists	stacks;

	if (!input_check(argc, argv) || argc < 2)
		error("Received incorrect input!");
	stacks = input_parser(argc, argv);

	exit(EXIT_SUCCESS);
}
