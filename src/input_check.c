/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:50 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/09 16:48:50 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	content_check(int argc, const char **argv)
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	if (argc < 2)
		return (FALSE);
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
	if (!content_check(argc, argv))
		error("Error");
}
