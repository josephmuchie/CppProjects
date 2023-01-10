CXX = clang++
RM = rm -f
CPPFLAGS = --std=c++17
objects = singly.o

output: $(objects)
	$(CXX) $(objects) -o output 

singly.o: singly.cpp
	$(CXX) $(CPPFLAGS) -c singly.cpp

.PHONY: clean
clean:
	$(RM) *.o $(objects)