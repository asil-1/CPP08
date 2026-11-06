#Makefile____________________
NAME		:=	EasyFind

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -MMD -MP

BUILD_DIR	:=	obj/

SRC			:=	main.cpp

OBJ			:=	$(SRC:%.cpp=$(BUILD_DIR)%.o)
DEPS		:=	$(SRC:%.cpp=$(BUILD_DIR)%.d)
OBJ_DIR		:=	$(sort $(dir $(OBJ)))

#Color_______________________

COLOR		:=	\033[0;38;5;24m
NC			:=	\033[0m

#____________________________

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $^ -o $(NAME)
	@echo "Linking Easy Find 🔎"

$(BUILD_DIR):
	@mkdir -p $@

$(OBJ_DIR)%.o: %.cpp | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) $< -c -o $@
	@echo "$(COLOR)[$(CXX)]$(NC) $<"

clean:
	@rm -rf $(BUILD_DIR)
	@echo "removed $(BUILD_DIR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)
