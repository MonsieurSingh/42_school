FLAG = -Wextra -Werror -Wall

CC = gcc

NAME = libft.a

source = 	ft_strlen.c	\
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strcpy.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_tolower.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_toupper.c \
			ft_substr.c \
			ft_memmove.c \
			ft_strlen.c \
			ft_split.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strrchr.c \
			ft_strchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_strtrim.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \

OBJECTS = $(source:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

$(NAME):	$(OBJECTS)
						ar src $(NAME) $(OBJECTS)

clean:
						rm -f $(OBJECTS)

fclean:		clean
						rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re