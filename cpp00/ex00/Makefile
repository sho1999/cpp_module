# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuramat <smuramat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 19:49:17 by smuramat          #+#    #+#              #
#    Updated: 2022/10/30 14:12:10 by smuramat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#再帰的な展開をしないために:=を使う
CXX			:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Wextra -Werror

NAME		:=	megaphone

SRCS		:=	main.cpp 

OBJS		:=	$(SRCS:.cpp=.o)

# $@ ターゲット名（ここでは %.o）
# $< 依存関係の一番最初の名前(ここではmegaphone)
%.o: %.cpp
	$(CXX) $(CXXFLAGS)  -c $< -o $@

# $^ ターゲットの全ての依存関係の名前(ここでは$(OBJS))
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
