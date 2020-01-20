# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 18:21:57 by rbednar           #+#    #+#              #
#    Updated: 2019/10/18 21:10:40 by rbednar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	./src/ft_buf/ft_buf_new.c \
		./src/ft_buf/ft_do_buf_empty.c \
		./src/ft_atoi_pf.c \
		./src/ft_help_double.c \
		./src/ft_buf/ft_buf_add.c \
		./src/ft_itoa_base.c \
		./src/ft_fract.c \
		./src/ft_double.c \
		./src/ft_itoa_pf.c \
		./src/ft_ldoublecheck.c \
		./src/ft_num_dig.c \
		./src/ft_itoa_base_ll.c \
		./src/ft_param/ft_param_nul.c \
		./src/ft_printf.c \
		./src/ft_str/ft_memnew_pf.c \
		./src/ft_lnum/ft_lnum.c \
		./src/ft_str/ft_memset_pf.c \
		./src/ft_percent.c \
		./src/ft_str/ft_strjoin_pf.c \
		./src/ft_str/ft_strndup_pf.c \
		./src/ft_str/ft_write_to_buff.c \
		./src/ft_str/ft_strnew_pf.c \
		./src/ft_type/ft_c.c \
		./src/ft_param/ft_param_add.c \
		./src/ft_str/ft_strlen_pf.c \
		./src/ft_type/ft_color.c \
		./src/ft_type/ft_f.c \
		./src/ft_type/ft_d_up.c \
		./src/ft_type/ft_f_up.c \
		./src/ft_type/ft_d.c \
		./src/ft_type/ft_o_null.c \
		./src/ft_type/ft_prcnt.c \
		./src/ft_type/ft_p.c \
		./src/ft_type/ft_o_up.c \
		./src/ft_type/ft_o.c \
		./src/ft_type/ft_u_up.c \
		./src/ft_type/ft_x_null.c \
		./src/ft_type/ft_u.c \
		./src/ft_type/ft_s.c \
		./src/ft_type/ft_x.c \
		./src/ft_type/ft_x_up.c

OBJ = $(SRC:.c=.o)

INC = ./inc

CC = @gcc
FLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "libftprintf.a done"
%.o: src/%.c
	$(CC) $(FLAGS) -I $(INC) -o $@ -c $<

all : $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
