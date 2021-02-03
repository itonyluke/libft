# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wanisha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 23:50:19 by wanisha           #+#    #+#              #
#    Updated: 2020/11/28 23:50:22 by wanisha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
		  ft_strlcpy.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
		  ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
		  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c \
		  ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		  ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
		  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= $(SRCS:.c=.o)

B_SRCS	 = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		   ft_lstmap.c

B_OBJS	=  $(B_SRCS:.c=.o)

INCLUDE	= libft.h

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFlAGS	= -Wall -Wextra -Werror

LIB		= ar -rc

LIN		= ranlib

.c.o:	
		$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB) $(NAME) $(OBJS)
			$(LIN) $(NAME)

.PHONY:	all clean fclean re bonus rebonus

all:	$(NAME)

bonus:	$(NAME) $(B_OBJS) 
		$(LIB) $(NAME) $(B_OBJS)
		$(LIN) $(NAME)

clean:	
		$(RM) $(OBJS) $(B_OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

rebonus: fclean bonus

