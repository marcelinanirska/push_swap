# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnirska <mnirska@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/13 00:48:48 by mnirska           #+#    #+#              #
#    Updated: 2025/05/14 16:56:47 by mnirska          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[36m
RESET = \033[0m
RED = \033[31m
BOLD = \033[1m
UNDERLINE = \033[4m
ITALIC = \033[3m

OBJ_DIR = obj/
SRC_DIR = src/
INCLUDE = push_swap.h

SRC = handle_error.c  index.c  list_utilities.c  push.c  push_swap.c  radix_sort.c \
reverse.c  rotate.c  simple_sort.c  swap.c  utilities.c

OBJ = $(addprefix $(OBJ_DIR), $(SRC:%.c=%.o))

CFLAGS = -Wall -Wextra -Werror -g3
FSANITIZE = -fsanitize=address
MAKE = make --no-print-directory

LIBFT_DIR = libft
PRINTF_DIR = printf
LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a
NAME = push_swap

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c 
	@mkdir -p $(OBJ_DIR)
	@echo "📦 $(ITALIC)$(YELLOW)Compiling $< $(RESET)"
	@cc $(CFLAGS) -c $< -o $@


$(NAME): $(LIBFT) $(PRINTF) $(OBJ)
	@echo ""
	@echo "		🚀 $(BOLD)$(YELLOW)Linking $(NAME)...$(RESET)"
	@cc $(CFLAGS) $(OBJ) -o $(NAME) -I $(INCLUDE) $(LIBFT)
	@echo ""
	@echo "	🎉 $(BOLD)$(GREEN)SUCCESS: $(NAME) has been created$(RESET) ✅ "
	@echo ""

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "		⚙ $(UNDERLINE)$(BOLD)Building $(LIBFT_DIR)$(RESET) ⚙"
	@echo ""

$(PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)
	@echo "		⚙ $(UNDERLINE)$(BOLD)Building $(PRINTF_DIR)$(RESET) ⚙"
	@echo ""

clean:
	@echo ""
	@echo "		🧹 $(BOLD)$(BLUE)Cleaning object files 🧹$(RESET)"
	@echo ""
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(PRINTF_DIR) clean
	@rm -rf $(OBJ_DIR)
	@echo "🗑️ $(YELLOW)$(BOLD) push_swap$(RESET)$(YELLOW) object files cleaned$(RESET)"



fclean: clean
	@echo ""
	@echo "		🧹 $(BOLD)$(BLUE)Cleaning everything 🧹$(RESET)"
	@echo ""
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(MAKE) -C $(PRINTF_DIR) fclean
	@echo "💾 $(YELLOW)Cleaning $(NAME)$(RESET)"
	@echo " ↪️ $(YELLOW)$(BOLD)$(NAME) has been cleaned$(RESET) ✅"
	@rm -f $(NAME)
	@echo ""
	@echo "	👉 $(BOLD)$(GREEN)Everything has been cleaned$(RESET) ❎"
	@echo ""

re: fclean $(NAME)

.PHONY: all clean fclean re