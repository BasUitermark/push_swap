/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclen.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:35 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:35:36 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strclen(char const *str, char c)
{
	t_size	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}
