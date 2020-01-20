/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:18:23 by ehaggon           #+#    #+#             */
/*   Updated: 2020/01/20 17:15:55 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int main(int argv, char **argc)
{
    if (argv == 2)
    {
        if (validate(argc[1]))
        {
            printf("%s\n","basic needs");
            drawing_main(argc[1]);
        }
        else
            usage_print();
    }
    else
        usage_print();
    return (0);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             