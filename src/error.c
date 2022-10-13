/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 18:36:36 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:30:07 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(char *error_msg)
{
	if (errno)
		perror("ERROR");
	else
		ft_putendl_fd(error_msg, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
