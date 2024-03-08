# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhamdan  <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 10:00:31 by tmatis            #+#    #+#              #
#    Updated: 2024/03/07 21:23:30 by hhamdan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =	gcc

FLAG =	-Wall -Wextra -Werror

LFT = 	libft/

LIB =	$(LFT)libft.a

LFSRC =	$(LFT)ft_atoi.c \
		$(LFT)ft_bzero.c \
		$(LFT)ft_calloc.c \
		$(LFT)ft_isalnum.c \
		$(LFT)ft_isalpha.c \
		$(LFT)ft_isascii.c \
		$(LFT)ft_isdigit.c \
		$(LFT)ft_isprint.c \
		$(LFT)ft_itoa.c \
		$(LFT)ft_memchr.c \
		$(LFT)ft_memcmp.c \
		$(LFT)ft_memcpy.c \
		$(LFT)ft_memmove.c \
		$(LFT)ft_memset.c \
		$(LFT)ft_putchar_fd.c \
		$(LFT)ft_putendl_fd.c \
		$(LFT)ft_putnbr_fd.c \
		$(LFT)ft_putstr_fd.c \
		$(LFT)ft_split.c \
		$(LFT)ft_strchr.c \
		$(LFT)ft_strcpy.c \
		$(LFT)ft_strdup.c \
		$(LFT)ft_striteri.c \
		$(LFT)ft_strjoin.c \
		$(LFT)ft_strlcat.c \
		$(LFT)ft_strlen.c \
		$(LFT)ft_strmapi.c \
		$(LFT)ft_strncmp.c \
		$(LFT)ft_strnstr.c \
		$(LFT)ft_strrchr.c \
		$(LFT)ft_strtrim.c \
		$(LFT)ft_substr.c \
		$(LFT)ft_tolower.c \
		$(LFT)ft_toupper.c \

LFTOB = $(LFSRC:.c=.o)

L =		ar rc

RLIB =	ranlib

LFLAG =	-L $(LFT) -lft

NAME =	libftprintf.a

SRCS =	str.c \
		int.c \
		itox_high.c \
		itox_low.c \
		pointer.c \
		printf.c \
		char.c \
		
FDIR = frame/

OBJS =	$(addprefix $(FDIR), $(SRCS:.c=.o))

all: 	$(NAME)

frame:
		@mkdir $(FDIR)
		@echo "$(FDIR): has been created"

$(NAME): $(OBJS) $(LIB)
		@$(L) $(NAME) $(OBJS) $(LFTOB)
		@$(RLIB) $(NAME)
		@echo "$(NAME): has been created"

frame/%.o: %.c | frame
		@$(CC) $(FLAG) -c $< -o $@

$(LIB):
		@make re -C $(LFT)
		@echo "$(LFT): has been created"

clean:
		@rm -f $(OBJS)
		@rm -rf $(FDIR)
		@echo "$(FDIR) & $(OBJS): have been cleaned"

fclean:	clean
		@/bin/rm -f $(NAME)
		@make fclean -C $(LFT)
		@echo "$(NAME) & $(LFT): have been cleaned"

re: fclean all

.PHONY: all clean fclean re