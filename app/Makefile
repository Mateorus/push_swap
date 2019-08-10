# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstiedem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 11:47:14 by gstiedem          #+#    #+#              #
#    Updated: 2019/05/26 18:09:32 by gstiedem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
all:

CHECKER := checker
PUSH_SWAP := push_swap
UTILDIR:=util
OBJDIR:=obj
SRC:=$(addprefix $(CHECKER)/,\
	main.c)
UTIL:=$(addprefix $(UTILDIR)/,\
	)
OBJ:=$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
OBJ:=$(OBJ) $(patsubst $(UTILDIR)/%.c, $(OBJDIR)/%.o, $(UTIL))
LIB:=
LIBPATH:=
CC:=gcc
CFLAGS:=-Wall -Wextra -Werror
INCL_DIR := ../include
INCLUDE := $(INCL_DIR)/push_swap.h
INC_FLAG := -I$(INCL_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(LIB) $(LIBPATH) $^ -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJDIR)/%.o: $(UTILDIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ): |$(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

db: $(SRC) $(UTIL)
	$(CC) $(CFLAGS) $^ $(LIB) $(LIBPATH) $(INCLUDE) -o $(NAME) -g
