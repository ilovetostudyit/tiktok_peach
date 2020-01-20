/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:39:35 by rbednar           #+#    #+#             */
/*   Updated: 2018/12/06 22:13:18 by rbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	while (++i < n)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			return ((unsigned char*)&dst[i + 1]);
		}
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	}
	return (NULL);
}
