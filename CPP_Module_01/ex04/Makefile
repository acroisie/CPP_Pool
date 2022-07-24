# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:25:26 by acroisie          #+#    #+#              #
#    Updated: 2022/07/20 17:26:13 by acroisie         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC					= c++

CC_FLAGS			= -Wall -Werror -Wextra -std=c++98

NAME				= Sed_is_for_losers

OBJS_DIR			= objs

OBJECTS_PREFIXED	= $(addprefix $(OBJS_DIR)/, $(OBJS))

OBJS				= $(SRCS:.cpp=.o)

DEPENDENCIES		= $(OBJECTS_PREFIXED:.o=.d)

SRCS				= main.cpp
	
all: $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp Makefile | $(OBJS_DIR)
	$(CC) $(CC_FLAGS) -MMD -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re

-include $(DEPENDENCIES)%