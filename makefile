all:hello
	g++ modal.cpp
hello:modal.o
	g++ modal.o -o hello
modal.o:modal.cpp
	g++ -c modal.cpp
clean:
	rm -r *.o hello
