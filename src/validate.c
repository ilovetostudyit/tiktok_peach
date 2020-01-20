/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:59:07 by ehaggon           #+#    #+#             */
/*   Updated: 2020/01/20 17:11:22 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int validate(char *argum)
{
    int numb;
    int min_value;
    int max_value;

    min_value = 1;
    max_value = 10;
    numb = ft_atoi(argum);
    if (numb < max_value && numb >= min_value)
    {
        return(1);
    }
    return(0);
}