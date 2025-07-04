# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvan-bre <lvan-bre@student.42lehavre.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/12 21:29:22 by lvan-bre          #+#    #+#              #
#    Updated: 2025/07/04 19:59:40 by lvan-bre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	c++
CFLAGS		=	-Werror -Wextra -Wall -g
CPPFLAG		=	-std=c++98

NAME		=	BSP
NAMEDEBUG	=	Debug_BSP

SRC_DIR		=	.
BUILD_DIR	=	build
DEBUG_DIR	=	debug_build


CLR_RESET	=	\033[0m
CLR_RED		=	\033[1;91m
CLR_GRN		=	\033[1;92m
CLR_YLW		=	\033[1;93m
CLR_BLUE	=	\033[1;94m
CLR_PPL		=	\033[1;95m
CLR_LPPL	=	\033[1;35m
CLR_CYAN	=	\033[1;96m
CLR_WTH		=	\033[1;97m

ERS_STR		=	\033[2K\r

SRCS		=	main.cpp Fixed.cpp bsp.cpp Point.cpp

OBJS		=	$(patsubst %.cpp, $(BUILD_DIR)/%.o, $(SRCS))
OBJS_DEBUG	=	$(patsubst %.cpp, $(DEBUG_DIR)/%.o, $(SRCS))

all:	$(NAME)

clean:
	@printf "$(CLR_YLW)\tCleaning objs\n\tRemoving build directory\n$(CLR_RESET)"
	@rm -rf $(BUILD_DIR)

fclean: clean
	@printf "$(CLR_YLW)\tRemoving $(CLR_RED)\"%s\"$(CLR_RESET)\n" $(NAME)
	@rm $(NAME)

re: fclean all

debug: $(NAMEDEBUG)

cleanbug:
	@printf "$(CLR_YLW)\tCleaning objs\n\tRemoving debug build directory\n$(CLR_RESET)"
	@rm -rf $(DEBUG_DIR)

fcleanbug: cleanbug
	@printf "$(CLR_YLW)\tRemoving $(CLR_RED)\"%s\"$(CLR_RESET)\n" $(NAMEDEBUG)
	@rm $(NAMEDEBUG)

rebug: fcleanbug debug

makeall: all debug

cleanall: clean cleanbug

fcleanall: fclean fcleanbug

$(NAME):	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@printf "\n$(CLR_BLUE)\tDone Building:\t$(CLR_LPPL)\"%s\"$(CLR_BLUE)!$(CLR_RESET)\n" $(NAME)

$(NAMEDEBUG):	$(OBJS_DEBUG)
	@$(CC) $(CFLAGS) $(OBJS_DEBUG) -o $@ -DDEBUG=true
	@printf "\n$(CLR_BLUE)\tDone Building:\t$(CLR_LPPL)\"%s\"$(CLR_BLUE)!$(CLR_RESET)\n" $(NAMEDEBUG)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(CPPFLAG) -c $< -o $@
	@printf "$(CLR_CYAN)\tCompiling: $(CLR_PPL)\"%s\"$(CLR_CYAN)...\n" $<

$(DEBUG_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(DEBUG_DIR)
	@$(CC) $(CFLAGS) $(CPPFLAG) -c $< -o $@ -DDEBUG=true
	@printf "$(CLR_CYAN)\tCompiling: $(CLR_PPL)\"%s\"$(CLR_CYAN)...\n" $<
