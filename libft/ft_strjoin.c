/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 21:14:10 by rbednar           #+#    #+#             */
/*   Updated: 2018/12/10 21:28:15 by rbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*k;

	if (s1 && s2)
	{
		k = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (k)
		{
			ft_strcpy(k, s1);
			ft_strcat(k, s2);
		}
		return (k);
	}
	return (NULL);
}
