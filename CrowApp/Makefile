.SUFFIXES: .cpp .o
CXX = g++
RM = rm -f
CXXFLAGS = -lpthread -std=c++11
OBJFILES = main.o
EXEC = output

${EXEC} : ${OBJFILES}
	${CXX} ${CXXFLAGS} -o ${EXEC} ${OBJFILES}

.cpp.o:
	${CXX} ${CXXFLAGS} -c $<

#List dependancies for Object files
#Board.o: Board.hpp
main.o: main.cpp

.PHONY: clean
clean:
	$(RM) $(OBJFILES) $(EXEC)