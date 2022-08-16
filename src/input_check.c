/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 17:20:50 by buiterma      #+#    #+#                 */
/*   Updated: 2022/08/16 16:50:46 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	content_check(int argc, const char **argv)
{
	size_t	i;
	size_t	j;
	size_t	minus;

	i = 1;
	while (argv[i])
	{
		minus = 0;
		j = -1;
		while (argv[i][++j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-')
				return (FALSE);
			if (argv[i][j] == '-')
			{
				if (ft_strlen(argv[i]) < 2)
					return (FALSE);
				minus++;
			}
		}
		if (minus > 1)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

void	input_check(int argc, const char **argv)
{
	if (!content_check(argc, argv))
		error("Error");
}
