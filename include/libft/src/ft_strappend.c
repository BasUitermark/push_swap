/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strappend.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 10:35:38 by buiterma      #+#    #+#                 */
/*   Updated: 2022/09/14 10:35:38 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strappend(char const *s1, char const *s2)
{
	char	*out;
	t_size	len1;
	t_size	len2;

	if (!s1)
		return (ft_strdup(s2));
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	out = (char *)ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!out)
		return (NULL);
	ft_memcpy(out, s1, len1);
	ft_memcpy(out + len1, s2, len2);
	free((char *)s1);
	return (out);
}
