all: Struct.o
    gcc -o program Struct.o
Struct.o: Struct.c
    gcc -c Struct.c
run:
    program
clean:
    rm *.o
    rm *.~
    
