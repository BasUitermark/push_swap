/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtoupper.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:14 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:35:14 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_strtoupper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_islower(str[i]))
			ft_toupper(str[i]);
		i++;
	}
}
