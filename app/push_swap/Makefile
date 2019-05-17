# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstiedem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 11:47:14 by gstiedem          #+#    #+#              #
#    Updated: 2019/04/21 13:40:19 by gstiedem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:=$(PATH)push_swap
PATH:=../
SRCDIR:=src
UTILDIR:=util
OBJDIR:=obj
INCLUDE:=-Iinclude
SRC:=$(addprefix $(SRCDIR)/,\
	)
UTIL:=$(addprefix $(UTILDIR)/,\
	)
OBJ:=$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
OBJ:=$(OBJ) $(patsubst $(UTILDIR)/%.c, $(OBJDIR)/%.o, $(UTIL))
LIB:=
LIBPATH:=
CC:=gcc
CFLAGS:=-Wall -Wextra -Werror

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
