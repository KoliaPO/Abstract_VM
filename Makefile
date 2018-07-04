#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myprosku <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 16:26:26 by myprosku          #+#    #+#              #
#    Updated: 2018/06/27 16:26:27 by myprosku         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = AVM

SRC =	src/Commands/Add.cpp src/Commands/Assert.cpp src/Commands/Commands.cpp src/Commands/Div.cpp \
		src/Commands/Dump.cpp src/Commands/Mod.cpp src/Commands/Mul.cpp src/Commands/Pop.cpp \
		src/Commands/Print.cpp src/Commands/Push.cpp src/Commands/Sub.cpp \
		src/OFactory.cpp src/Parser.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra
 
all: $(NAME)

$(NAME): $(OBJ)
	@clang++ -std=c++98 $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@clang++ -c $(FLAGS) -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
