/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:06 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:35:07 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	return (c);
}
