/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 16:15:26 by buiterma      #+#    #+#                 */
/*   Updated: 2022/07/12 17:41:50 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_dlist_i **src, t_dlist_i **dest)
{
	t_dlist_i	*temp;

	ft_dlstdel_node_i(src, *src);
	ft_dlstadd_front_i(dest, temp);
	ft_dlstadd_front_i(src, temp);
}
