# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/15 10:23:08 by yassine           #+#    #+#              #
#    Updated: 2022/05/17 21:24:13 by yaidriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_strcpy.c ft_strncpy.c ft_str_is_alpha.c ft_str_is_numeric.c\
				  ft_str_is_lowercase.c ft_str_is_uppercase.c ft_str_is_printable.c\
				  ft_strupcase.c ft_strlowcase.c ft_strcapitalize.c ft_strlcpy.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			=  libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus