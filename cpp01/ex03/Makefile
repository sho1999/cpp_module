# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 19:49:17 by smuramat          #+#    #+#              #
#    Updated: 2022/10/29 19:06:31 by smuramat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Wextra -Werror
# CXXFLAGS	+= -fsanitize=address

NAME		:=	ex03_out

SRCS		:=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
