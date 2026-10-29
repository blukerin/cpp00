# Nombre del ejecutable final
NAME        = crappy

# Archivos fuente del proyecto
SRCS        =	main.cpp \
				src/Contact.cpp \
				src/PhoneBook.cpp \
              # ClassName.cpp
              
# Módulo de C++ actual
MODULE      = 0

# CONFIGURACIÓN DEL COMPILADOR Y FLAGS

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -rf

# Generación automática de nombres de archivos objeto (.o)
OBJS        = $(SRCS:.cpp=.o)

# REGLAS DE COMPILACIÓN (No tocar)

# Regla por defecto
all: $(NAME)

# Enlazado final del ejecutable
$(NAME): $(OBJS)
	@echo "Enlazando $@..."
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "¡Compilación terminada!"

# Compilación de cada archivo fuente a archivo objeto
%.o: %.cpp
	@echo "Compilando $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# REGLAS DE LIMPIEZA Y HERRAMIENTAS

clean:
	@echo "Borrando archivos objeto (.o)..."
	@$(RM) $(OBJS)

fclean: clean
	@echo "Borrando ejecutable $(NAME)..."
	@$(RM) $(NAME)

re: fclean all

# Norminette C++
norm:
	@echo "Auditando código con cppnorm (Módulo $(MODULE))..."
	@cppnorm . -m $(MODULE)

.PHONY: all clean fclean re norm