# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drafe <drafe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 20:00:18 by drafe             #+#    #+#              #
#    Updated: 2020/03/13 21:13:03 by drafe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

FLAGS = -Wall -Werror -Wextra

NAME = phoneBook

LIBRARIES = 

INCLUDES = /Contact.class.hpp

OBJS_DIRECTORY = 

OBJS_LIST = main.o\
	Contact.class.o

OBJS_COMPILE = $(addprefix $(OBJS_DIRECTORY), $(OBJS_LIST))

%.o: %.cpp $(INCLUDES)
	$(CC) $(FLAGS) $(LIBRARIES) $(INCLUDES) -c $@ -o $< 

all: $(NAME)

$(NAME): $(OBJS_COMPILE)
	$(CC) $(FLAGS) $(LIBRARIES) -I$(INCLUDES) $(OBJS_COMPILE) -o $(NAME)

clean:
	rm -rf $(TARGET).dSYM
	rm -rf $(OBJS_LIST)

fclean: clean
	rm -f $(NAME)

re: fclean all
