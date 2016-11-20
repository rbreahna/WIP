# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbreahna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/10 18:17:39 by lcernei           #+#    #+#              #
#    Updated: 2016/10/24 18:51:32 by rbreahna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME=fillit

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC= main.c ft_show_matrix.c show_array.c create_array_from_file.c \
tetra_num.c ft_map.c turn_to_alpha.c ft_put_tetra.c isolate.c \
move_back_map_recursive.c ft_solve.c check_alpha.c del_tetra.c \
check_nalpha.c


OBJ=$(SRC:.c=.o)

$(NAME): 
	$(CC) $(CFLAGS) -c $(SRC) -I libft/
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) ./libft/libft.a

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean
