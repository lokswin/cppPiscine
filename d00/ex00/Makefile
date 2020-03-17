# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drafe <drafe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 20:00:18 by drafe             #+#    #+#              #
#    Updated: 2020/03/13 21:16:10 by drafe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

FLAGS = -Wall -Werror -Wextra

NAME = megaphone

LIBRARIES =

INCLUDES =

OBJS_DIRECTORY =

OBJS_LIST = megaphone.o

OBJS_COMPILE = $(addprefix $(OBJS_DIRECTORY), $(OBJS_LIST))

%.o: %.cpp
	$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) -c $< -o $@ 

all: $(NAME)

$(NAME): $(OBJS_COMPILE)
	$(CC) $(FLAGS) $(LIBRARIES) $(OBJS_COMPILE) -o $(NAME)

clean:
	rm -rf $(TARGET).dSYM
	rm -rf $(OBJS_LIST)

fclean: clean
	rm -f $(NAME)

re: fclean all
