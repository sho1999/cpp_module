# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 19:49:17 by smuramat          #+#    #+#              #
#    Updated: 2022/10/23 20:18:32 by smuramat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Wextra -Werror
# CXXFLAGS	+= -fsanitize=address
# CXXFLAGS	+= -fsanitize=leaks

NAME		:=	zombie

SRCS		:=	main.cpp Zombie.cpp zombieHorde.cpp

OBJS		:=	$(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY:	all
all: $(NAME)

.PHONY:	clean
clean:
	rm -rf $(OBJS)

.PHONY:	fclean
fclean: clean
	rm -rf $(NAME)

.PHONY:	re
re: fclean all
