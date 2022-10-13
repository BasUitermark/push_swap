/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlstfirst_i.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 12:58:31 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:37:47 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_dlist_i	*ft_dlstfirst_i(t_dlist_i *lst)
{
	if (!lst)
		return (NULL);
	while (lst->prev != NULL)
		lst = lst->prev;
	return (lst);
}
