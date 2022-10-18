# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:54:51 by mlarra            #+#    #+#              #
#    Updated: 2022/10/18 13:29:45 by mlarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex00

SRCS	=	main.cpp	Animal.cpp	Dog.cpp	Cat.cpp	Ishak.cpp	WrongAnimal.cpp	WrongCat.cpp

OBJS	=	${SRCS:.cpp=.o}

HEADER	=	Animal.hpp	Dog.hpp	Cat.hpp	Ishak.hpp	WrongAnimal.hpp	WrongCat.hpp

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

.PHONY	:	all clean fclean re

${NAME}	:	${OBJS} ${HEADER}
			${CC} ${CFLAFS} ${SRCS} -o ${NAME}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all