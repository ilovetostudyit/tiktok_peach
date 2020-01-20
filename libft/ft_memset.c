/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:05:44 by rbednar           #+#    #+#             */
/*   Updated: 2018/12/04 22:23:07 by rbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buf;

	buf = (unsigned char *)b;
	while (len > 0)
	{
		*buf = (unsigned char)c;
		buf++;
		len--;
	}
	return (b);
}
