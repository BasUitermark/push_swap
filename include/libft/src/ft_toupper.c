/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:01 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:35:02 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}
