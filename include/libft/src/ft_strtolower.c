/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtolower.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:15 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:35:16 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_strtolower(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_isupper(str[i]))
			ft_tolower(str[i]);
		i++;
	}
}
