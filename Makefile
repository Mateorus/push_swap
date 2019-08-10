# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstiedem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 11:47:14 by gstiedem          #+#    #+#              #
#    Updated: 2019/05/26 18:11:47 by gstiedem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := app
LIB_DIR := lib
LIB_FT := libft
LIBS := $(addprefix $(LIB_DIR)/, $(LIB_FT))
.PHONY: $(LIBS) $(NAME) all clean fclean

all: $(NAME)

$(NAME): $(LIBS)
	$(MAKE) -C $@ $(MAKECMDGOALS)

$(LIBS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

clean: $(LIBS) $(NAME)

fclean: $(LIBS) $(NAME)

re: fclean all
