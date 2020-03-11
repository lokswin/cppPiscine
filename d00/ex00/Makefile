# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drafe <drafe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 20:00:18 by drafe             #+#    #+#              #
#    Updated: 2020/03/07 16:42:19 by drafe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -Wall -Werror -Wextra

NAME = phoneBook

LIBRARIES = 

INCLUDES = phoneBook.hpp

OBJS_DIRECTORY = 

OBJS_LIST = phoneBook.o

%.o: %.c
	$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) -c $@ -o $< 

all: $(NAME)

OBJS_COMPILE = $(addprefix $(OBJS_DIRECTORY), $(OBJS_LIST))

$(NAME): $(OBJS_COMPILE)
	$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) $(OBJS_COMPILE) -o $(NAME)

clean:
	rm -rf $(TARGET).dSYM
	rm -rf $(OBJS_LIST)

fclean: clean
	rm -f $(NAME)

re: fclean all