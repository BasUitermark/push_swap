/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:36:41 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:36:42 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_islower(c) || ft_isupper(c));
}
