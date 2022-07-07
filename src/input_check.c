/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:50 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/07 18:36:11 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	content_check(int argc, const char **argv)
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

bool	input_check(int argc, const char **argv)
{
	if (!content_check(argc, argv) || argc < 2 || !argv[1])
		return (FALSE);
	return (TRUE);
}
