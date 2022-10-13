/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printcarray.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:52 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:38:23 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_printcarray(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_printf("%s\n", str[i]);
		i++;
	}
}
