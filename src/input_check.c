/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:50 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/12 15:15:36 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	content_check(int argc, const char **argv)
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (FALSE);
			j++;
		}
		j = 0;
		i++;
	}
	return (TRUE);
}

void	input_check(int argc, const char **argv)
{
	if (argc < 2)
		error("Incorrect number of arguments!");
	if (!content_check(argc, argv))
		error("Received incorrect input!");
}
