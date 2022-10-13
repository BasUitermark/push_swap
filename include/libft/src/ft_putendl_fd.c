/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:45 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:35:46 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_putendl_fd(char *s, int fd)
{
	size_t	out;

	out = 0;
	out += ft_putstr_fd(s, fd);
	out += ft_putchar_fd('\n', fd);
	return (out);
}
