CXXFLAFGS = -Wall -std=c++2a
EXECUTABLES = io namespaces new_delete default_params overloading references const_and_inline ex2 ex3 ex4 ex6

all: $(EXECUTABLES) mixing_c_and_cpp_together

calc.o: calc.c
	cc -c $< -o $@

mixing_c_and_cpp_together: mixing_c_and_cpp_together.o
	c++ -o $@ $< calc.o

mixing_c_and_cpp_together.o: mixing_c_and_cpp_together.cpp calc.o
	c++ -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(EXECUTABLES) mixing_c_and_cpp_together
