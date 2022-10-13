/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printlist.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:48 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:38:30 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_printlist(t_list *list)
{
	while (list)
	{
		ft_printf("%s\n", list->content);
		list = list->next;
	}
}
