/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_give_me_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 22:52:45 by rbednar           #+#    #+#             */
/*   Updated: 2018/12/19 23:46:30 by rbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_word	ft_give_me_word(char const *s, char c)
{
	t_word	k;
	size_t	i;
	size_t	l;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	k.point = (char *)&s[i];
	l = 0;
	while (s[i] != c && s[i])
	{
		l++;
		i++;
	}
	k.len = l;
	return (k);
}
