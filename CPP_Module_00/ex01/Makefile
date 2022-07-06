# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 10:53:09 by acroisie          #+#    #+#              #
#    Updated: 2022/07/06 16:26:03 by acroisie         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC					= c++

CC_FLAGS			= -Wall -Werror -Wextra -std=c++98

NAME				= PhoneBook

OBJS_DIR			= srcs/objs

INC_DIR				= includes/

SRCS_DIR			= srcs/

OBJECTS_PREFIXED	= $(addprefix $(OBJS_DIR)/, $(OBJS))

OBJS				= $(SRCS:.cpp=.o)

SRCS				=	main.cpp \
						Contact.cpp \
						PhoneBook.cpp

INC					=	$(INC_DIR)Contact.hpp \
						$(INC_DIR)PhoneBook.hpp

all: $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	
$(OBJS_DIR)/%.o: $(SRCS_DIR)%.cpp Makefile $(INC) $(OBJS_DIR)
	$(CC) $(CC_FLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJECTS_PREFIXED)
	$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean$
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
