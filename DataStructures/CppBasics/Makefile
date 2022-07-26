CXX = clang++
RM = rm -f
CPPFLAGS = --std=c++17
objects = pointers.o

output: $(objects)
	$(CXX) $(objects) -o output 

pointers.o: pointers.cpp
	$(CXX) $(CPPFLAGS) -c pointers.cpp

.PHONY: clean
clean:
	$(RM) *.o $(objects)