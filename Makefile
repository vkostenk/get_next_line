# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkostenk <vkostenk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 12:28:40 by vkostenk          #+#    #+#              #
#    Updated: 2018/07/25 12:21:06 by vkostenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line
CFLAG = -Wall -Werror -Wextra
SOURCE = *.c

all : $(NAME)

$(NAME) :
		make -C Libft
		gcc -o $(NAME) $(CFLAG) $(SOURCE) -LLibft -lft -I get_next_line.h

clean :
		make clean -C Libft
		/bin/rm -f *~

fclean : clean
		make fclean -C Libft
		/bin/rm -f $(NAME)

re : fclean all
