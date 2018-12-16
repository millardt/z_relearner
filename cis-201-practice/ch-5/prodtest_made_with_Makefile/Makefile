#
all: main


main : main.cpp
	@g++ -o main *.cpp 

run : main
	@echo "Running the program:"
	@./main

edit:
	@vim *.cpp

debug:
	@gdb ./main

clean :
	@rm *.o main
