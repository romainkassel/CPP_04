NAME = Polymorphism

SRCS = ./srcs/

INCLUDES = -Iincludes

CPPFILES = 	$(SRCS)main.cpp $(SRCS)Animal.cpp $(SRCS)Dog.cpp $(SRCS)Cat.cpp $(SRCS)WrongAnimal.cpp $(SRCS)WrongCat.cpp \
			tests/testCopyByAffectation/testAnimalCopyByAffectation.cpp \
			tests/testCopyByAffectation/testDogCopyByAffectation.cpp tests/testCopyByAffectation/testCatCopyByAffectation.cpp \
			tests/testCopyByAffectation/testWrongAnimalCopyByAffectation.cpp tests/testCopyByAffectation/testWrongCatCopyByAffectation.cpp \
			tests/testCopyByConstructor/testAnimalCopyByConstructor.cpp \
			tests/testCopyByConstructor/testDogCopyByConstructor.cpp tests/testCopyByConstructor/testCatCopyByConstructor.cpp \
			tests/testCopyByConstructor/testWrongAnimalCopyByConstructor.cpp tests/testCopyByConstructor/testWrongCatCopyByConstructor.cpp
OFILES = $(CPPFILES:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) -g -o $(NAME) $(OFILES)

$(SRCS)%.o: $(SRCS)%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

tests/testCopyByAffectation/%.o: tests/testCopyByAffectation/%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

tests/testCopyByConstructor/%.o: tests/testCopyByConstructor/%.cpp
	$(CXX) $(CXXFLAGS) -g -c -o $@ $< $(INCLUDES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re