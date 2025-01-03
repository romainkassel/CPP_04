NAME = Interface

SRCS = ./srcs/

INCLUDES = -Iincludes

CPPFILES =	$(SRCS)main.cpp $(SRCS)AMateria.cpp $(SRCS)Ice.cpp $(SRCS)Cure.cpp $(SRCS)Character.cpp $(SRCS)MateriaSource.cpp \
			tests/materia/testMateriaGetType.cpp tests/materia/testMateriaClone.cpp tests/materia/testMateriaUse.cpp \
			tests/materia/testMateriaCopyByAffectation.cpp tests/materia/testMateriaCopyByConstructor.cpp \
			tests/character/testCharacterGetName.cpp tests/character/testCharacterUnequip.cpp \
			tests/character/testCharacterEquip.cpp tests/character/testCharacterUse.cpp \
			tests/character/testCharacterCopyByAffectation.cpp tests/character/testCharacterCopyByConstructor.cpp \
			tests/materiaSource/testMateriaSourceLearn.cpp tests/materiaSource/testMateriaSourceCreate.cpp \
			tests/materiaSource/testMateriaSourceCopyByAffectation.cpp tests/materiaSource/testMateriaSourceCopyByConstructor.cpp \


OFILES = $(CPPFILES:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
VERBOSE = -D VERBOSE=0

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) -g -o $(NAME) $(OFILES)

$(SRCS)%.o: $(SRCS)%.cpp
	$(CXX) $(CXXFLAGS) $(VERBOSE) -g -c -o $@ $< $(INCLUDES)

tests/character/%.o: tests/character/%.cpp
	$(CXX) $(CXXFLAGS) $(VERBOSE) -g -c -o $@ $< $(INCLUDES)

tests/materia/%.o: tests/materia/%.cpp
	$(CXX) $(CXXFLAGS) $(VERBOSE) -g -c -o $@ $< $(INCLUDES)

tests/materiaSource/%.o: tests/materiaSource/%.cpp
	$(CXX) $(CXXFLAGS) $(VERBOSE) -g -c -o $@ $< $(INCLUDES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re