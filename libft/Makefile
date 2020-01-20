# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/24 14:34:20 by rbednar           #+#    #+#              #
#    Updated: 2019/10/18 21:10:52 by rbednar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# find . -d 1 -name "*.c" | awk '{print $1 " \\" }' >> Makefile
# to add .c

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRCS = 	./ft_atoi.c \
		./ft_bzero.c \
		./ft_count_words.c \
		./ft_give_me_word.c \
		./ft_gnl.c \
		./ft_isalnum.c \
		./ft_isalpha.c \
		./ft_isascii.c \
		./ft_isdigit.c \
		./ft_isprint.c \
		./ft_itoa.c \
		./ft_lstadd.c \
		./ft_lstaddend.c \
		./ft_lstclear.c \
		./ft_lstdel.c \
		./ft_lstdelone.c \
		./ft_lstiter.c \
		./ft_lstmap.c \
		./ft_lstnew.c \
		./ft_memalloc.c \
		./ft_memccpy.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_memcpy.c \
		./ft_memdel.c \
		./ft_memmove.c \
		./ft_memset.c \
		./ft_putchar.c \
		./ft_putchar_fd.c \
		./ft_putendl.c \
		./ft_putendl_fd.c \
		./ft_putnbr.c \
		./ft_putnbr_fd.c \
		./ft_putstr.c \
		./ft_putstr_fd.c \
		./ft_strcat.c \
		./ft_strchr.c \
		./ft_strclr.c \
		./ft_strcmp.c \
		./ft_strcpy.c \
		./ft_strdel.c \
		./ft_strdup.c \
		./ft_strequ.c \
		./ft_striter.c \
		./ft_striteri.c \
		./ft_strjoin.c \
		./ft_strlcat.c \
		./ft_strlen.c \
		./ft_strmap.c \
		./ft_strmapi.c \
		./ft_strncat.c \
		./ft_strncmp.c \
		./ft_strncpy.c \
		./ft_strnequ.c \
		./ft_strnew.c \
		./ft_strnstr.c \
		./ft_strrchr.c \
		./ft_strsplit.c \
		./ft_strstr.c \
		./ft_strsub.c \
		./ft_strtrim.c \
		./ft_swap.c \
		./ft_tolower.c \
		./ft_toupper.c

INCLUDES = ./

OBJ = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c	
	@gcc $(FLAG) -I $(INCLUDES) -o $@  -c $<

$(NAME): $(OBJ)
		@make -C printf
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "libtf.a done"
clean:
		@make clean -C printf
		@rm -f $(OBJ)
		@rm -f *.gch
		
fclean: clean
		@make fclean -C printf
		@rm -f $(NAME)
		
re:		fclean all
