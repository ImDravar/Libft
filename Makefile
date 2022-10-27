# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rruiz-sa <rruiz-sa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 14:16:43 by rruiz-sa          #+#    #+#              #
#    Updated: 2022/10/13 23:40:22 by rruiz-sa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#  .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.      .-.    #
# 42BCN\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\  42BCN\   #
# '     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'        #

NAME = libft.a
NAME_BONUS = .bonus

# //-=-=-=-/-=-=-=-//-=-=-=-//-=-=-=-//COLORS//-=-=-=-//-=-=-=-//-=-=-=-//-=-=-=-//#

WHITE	= \033[97m
GREEN	= \033[92m
RED		= \033[91m
CYAN	= \033[96m
YELLOW	= \033[93m
DEF_CL	= \033[m

# //-=-=-=-//-=-=-=-//-=-=-=-//-=-=-=-//COMAND//-=-=-=-//-=-=-=-//-=-=-=-//-=-=-=-//#


CFLAGS 	= -Wall -Wextra -Werror

RM 		= rm -f

NORM 	= norminette -R CheckForbiddenSourceHeader .

AR		= ar -rcs

# //-=-=-=-//-=-=-=-//-=-=-=-//-=-=-=-//-FILES//-=-=-=-//-=-=-=-//-=-=-=-//-=-=-=-//#

HEADER = libft.h

SRC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_itoa.c  ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = ${BONUS:.c=.o}

DEPS = $(SRC:.c=.d)

DEPS_BONUS = $(BONUS:.c=.d)

# //-=-=-=-//-=-=-=-//-=-=-=-//-=-=-=-//-RULES//-=-=-=-//-=-=-=-//-=-=-=-//-=-=-=-//#

%.o: %.c Makefile
	@$(CC) $(CFLAGS) -MMD -I ./ -c $< -o $@
	@echo "$(WHITE)	Compiling: $(CYAN)$< $(DEF_CL)"

all: $(NAME)

-include $(DEPS)
$(NAME): $(OBJ)
	@$(AR)  $(NAME) $(OBJ)
	@echo "Compilation $(GREEN) Completed ! $(DEF_CL)"

bonus: $(NAME_BONUS)

-include $(DEPS_BONUS)
$(NAME_BONUS): $(OBJ) ${OBJ_BONUS}
	@$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch .bonus
	@echo "Compilation with bonus $(GREEN) Completed ! $(DEF_CL)"

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "$(WHITE)	Deleted objects: $(RED)$(OBJ) $(OBJ_BONUS) $(DEF_CL)"
	@$(RM) $(DEPS) $(DEPS_BONUS)
	@echo "$(WHITE)	Deleted dependencies: $(RED)$(DEPS) $(DEPS_BONUS) $(DEF_CL)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(WHITE)	Deleted: $(RED)$(NAME) $(DEF_CL)"

re: fclean all

norm:
	@echo "$(YELLOW)Norminette says:  $(DEF_CL)"
	@$(NORM)

.PHONY: all clean fclean re norm bonus

#  .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.     .-.      .-.   #
# 42BCN\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\42_RuRu\  42BCN\  #
# '     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'     `-'       #