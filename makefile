# The compiler: g++ for C++ program
prog1: ./lib/main.cc ./lib/replace.cc
		g++ -g -Wall -o prog1 ./lib/main.cc ./lib/replace.cc

clean:
		$(RM) prog1
