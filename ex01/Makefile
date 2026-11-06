#Makefile_____________________
NAME		:=	Span

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -MMD -MP

BUILD_DIR	:=	obj/

SRC			:=	main.cpp\
				Span.cpp

OBJ			:= $(SRC:%.cpp=$(BUILD_DIR)%.o)
DEPS		:= $(SRC:%.cpp=$(BUILD_DIR)%.d)
OBJ_DIR		:= $(sort $(dir $(OBJ)))

#Color_______________________

COLOR		:=	\033[1;38;5;12m
NC			:=	\033[0m

#____________________________

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $^ -o $(NAME)
	@echo "Linking Span"

$(BUILD_DIR):
	@mkdir -p $@

$(OBJ_DIR)%.o: %.cpp | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) $< -c -o $@
	@echo "$(COLOR)[c++]$(NC) $<"

clean:
	@rm -rf $(BUILD_DIR)
	@echo "cleaned $(BUILD_DIR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)
