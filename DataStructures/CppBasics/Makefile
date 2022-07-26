CXX = clang++
RM = rm -f
CPPFLAGS = --std=c++17
objects = maths.o

output: $(objects)
	$(CXX) $(objects) -o output 

maths.o: maths.cpp
	$(CXX) $(CPPFLAGS) -c maths.cpp

.PHONY: clean
clean:
	$(RM) *.o $(objects)