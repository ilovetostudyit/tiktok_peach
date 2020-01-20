/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 22:52:31 by rbednar           #+#    #+#             */
/*   Updated: 2018/12/26 19:46:26 by rbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *buf;

	buf = (char *)malloc(sizeof(char) * size + 1);
	if (!buf || size == (size_t)-1)
		return (NULL);
	ft_memset(buf, '\0', size + 1);
	return (buf);
}
