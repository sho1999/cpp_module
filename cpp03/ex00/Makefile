# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuramat <smuramat@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 19:49:17 by smuramat          #+#    #+#              #
#    Updated: 2022/11/03 15:55:09 by smuramat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Wextra -Werror

NAME		:=	ex00_out

SRCS		:=	main.cpp ClapTrap.cpp

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
