# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gstiedem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 11:47:14 by gstiedem          #+#    #+#              #
#    Updated: 2019/04/21 15:18:28 by gstiedem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP:=push_swap
CHECKER:=checker
APP_DIR:=app
NAME:=$(addprefix $(APP_DIR)/, $(PUSH_SWAP) $(CHECKER))
LIB_FT:=libft
GNL:=gnl
LIB_DIR:=lib
LIBS:=$(addprefix $(LIB_DIR)/, $(LIB_FT) $(GNL))
.PHONY:$(NAME) all $(LIBS) clean fclean re db

all: $(NAME)

$(NAME): $(LIBS)
	$(MAKE) -C $@ $(MAKECMDGOALS)

$(LIBS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

clean: $(LIBS) $(NAME)

fclean: $(LIBS) $(NAME)

re: fclean all

$(LIB_DIR)/$(GNL): $(LIB_DIR)/$(LIB_FT)
