/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:50 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 17:13:29 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	input_check(int argc, char **argv)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) || argv[i][j] != '-')
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}
