CXX = clang++
RM = rm -f
CPPFLAGS = --std=c++17
objects = basics.o

output: $(objects)
	$(CXX) $(objects) -o output 

basics.o: basics.cpp
	$(CXX) $(CPPFLAGS) -c basics.cpp

.PHONY: clean
clean:
	$(RM) *.o $(objects)