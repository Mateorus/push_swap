# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstiedem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/21 15:20:32 by gstiedem          #+#    #+#              #
#    Updated: 2019/04/21 16:42:45 by gstiedem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := get_next_line.o
CC := gcc
CFLAGS := -Wall -Werror -Wextra
INCL_DIR := ../../include
INCLUDE := $(INCL_DIR)/get_next_line.h
INC_FLAG := -I$(INCL_DIR)

all: $(NAME)

$(NAME): get_next_line.c $(INCLUDE)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) $(INC_FLAG) -c $< -o $@
