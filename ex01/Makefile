# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 09:58:04 by sniemela          #+#    #+#              #
#    Updated: 2025/05/05 09:08:04 by sniemela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CPPFLAGS = -Wall -Werror -Wextra -std=c++11
CPP = c++
SOURCES = src/main.cpp \
			src/Bureaucrat.cpp \
			src/Form.cpp

OBJDIR = obj
OBJS = $(SOURCES:src/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	@mkdir -p $(OBJDIR)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re