/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:18:29 by ehaggon           #+#    #+#             */
/*   Updated: 2020/01/20 17:31:21 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# include <stdbool.h>
# include <SDL_image.h>
# include <math.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../libft/libft.h"

void usage_print();
int validate(char *argum);
void drawing_main(char *argum);