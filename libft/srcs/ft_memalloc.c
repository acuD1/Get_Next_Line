/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 19:10:54 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/23 10:38:41 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!size)
		return (NULL);
	if (!(mem = (void *)malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
