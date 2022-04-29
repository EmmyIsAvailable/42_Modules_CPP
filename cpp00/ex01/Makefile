NAME	= phonebook

SRCS	= main.cpp PhoneBook.cpp Contact.cpp

HEADER	= PhoneBook.hpp Contact.hpp

OBJS	= ${SRCS:.cpp=.o}

RM	= rm -rf

CC	= c++

FLAGS	= -Wall -Wextra -Werror

all:		${NAME}

.cpp.o:
			@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS} ${HEADER}
			@echo "$(shell tput bold)$(shell tput setaf 5)Compiling...$(shell tput sgr0)"
			@${CC} ${OBJS} -o ${NAME} ${HEADER}
			@echo "$(shell tput bold)$(shell tput setaf 5)DONE$(shell tput sgr0)"

clean:          
			@${RM} ${OBJS}
			@echo "$(shell tput bold)$(shell tput setaf 5)Deleting object files...$(shell tput sgr0)"
			@echo "$(shell tput bold)$(shell tput setaf 5)DONE$(shell tput sgr0)"

fclean:		clean
			@${RM} ${NAME}
			@echo "$(shell tput bold)$(shell tput setaf 5)Deleting binaries...$(shell tput sgr0)"
			@echo "$(shell tput bold)$(shell tput setaf 5)DONE$(shell tput sgr0)"

re:			fclean all

.PHONY:		all clean fclean re
