/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:15:02 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 14:27:07 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!s)
		return (NULL);
	if (!(dst = ft_memalloc(len + 1)))
		return (NULL);
	while (i < len)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
