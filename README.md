# Create C Library
# Static:

Compile: gcc -c *.c //all c files which we want to make library file

Create library "libcalculator.a": ar -cr libcalculator.a *.o //include all compiled code to create library file

Linking main.c with the library: gcc -o calculator -L/'//current path of library' main.c -lcalculator

Execute your program: ./calculator

# Dynamic:

Compile: gcc -fPIC -c *.c //all c files which we want to make library file

Create library "libcalculator.so": gcc -shared -fPIC -o libcalculator.so *.o //include all compiled code to create library file

copy library to default directory: cp '//current path of library' '//path of default directory'

Linking main.c with the library: gcc -o calculator main.c -lcalculator

Execute your program: ./calculator
