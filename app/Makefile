# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstiedem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 11:47:14 by gstiedem          #+#    #+#              #
#    Updated: 2019/08/10 14:16:45 by gstiedem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER := checker
PUSH_SWAP := push_swap
TARGET := $(addprefix ../, $(CHECKER) $(PUSH_SWAP))
UTIL := util
OBJ := obj
CHECKER_SRC := $(addprefix $(CHECKER)/,\
	main.c)
PUSH_SWAP_SRC := $(addprefix $(PUSH_SWAP)/,\
	main.c)
UTIL_SRC := $(addprefix $(UTIL)/,\
	)
CHECKER_OBJ := $(patsubst $(CHECKER)/%.c, $(OBJ)/%.o, $(CHECKER_SRC))
PUSH_SWAP_OBJ := $(patsubst $(PUSH_SWAP)/%.c, $(OBJ)/%.o, $(PUSH_SWAP_SRC))
UTIL_OBJ := $(patsubst $(UTIL)/%.c, $(OBJ)/%.o, $(UTIL_SRC))
LIBPATH := ../lib
LIB := $(LIBPATH)/libft
CC := gcc
CFLAGS := -Wall -Wextra -Werror
INCL_DIR := ../include
INCLUDE := $(INCL_DIR)/push_swap.h
INC_FLAG := -I$(INCL_DIR)
.PHONY: clean fclean all re

all: $(TARGET)

$(TARGET): $(CHECKER) $(PUSH_SWAP)

$(CHECKER): $(CHECKER_OBJ) $(INCLUDE) |$(OBJ)
	$(CC) $(LIB) $(LIBPATH) $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

$(OBJ)/%.o: $(CHECKER)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ)/%.o: $(PUSH_SWAP)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ)/%.o: $(UTIL)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ):
	mkdir $(OBJ)

db: $(SRC) $(UTIL)
	$(CC) $(CFLAGS) $^ $(LIB) $(LIBPATH) $(INCLUDE) -o $(NAME) -g
