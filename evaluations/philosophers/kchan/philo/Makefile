#SETUP
NAME		=	philo
CC			=	gcc -pthread
FLAGS		=	-Wall -Wextra -Werror
CPPFLAGS	:=	-I includes

#CC			=	gcc -g -pthread
#FLAGS += -fsanitize=pthread
RM			=	rm -rf

#FILES AND PATH
HEADER_SRCS	=	philo.h philo_init.h
HEADER_DIR	=	includes/
HEADER		=	$(addprefix $(HEADER_DIR), $(HEADER_SRCS))
SRCS		=	main.c init_fork.c init_rules.c\
				time.c clean.c engine.c util.c \
				process.c routine_fork.c monitor.c \
				init_mutex.c routine_philo.c

SRC_DIR		=	src/
SRC_PATH	=	$(addprefix $(SRC_DIR), $(SRCS))
OBJ_DIR		=	obj/
OBJ       	=	$(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC_PATH))

#LIB
LIB = -lpthread

#COMMANDS
$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HEADER) Makefile
				@mkdir -p $(OBJ_DIR)
				@${CC} ${FLAGS} $(CPPFLAGS) -c $< -o $@

all:			$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME) 
	@echo -e "$(GREEN)$(NAME) created!$(DEFAULT)"

clean:
				@$(RM) $(OBJ)
				@echo -e "$(YELLOW)object files deleted!$(DEFAULT)"

fclean:			clean
				@rm $(NAME)
				@echo -e "$(RED)all deleted!$(DEFAULT)"

re:				fclean all

.PHONY:			all clean fclean re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m