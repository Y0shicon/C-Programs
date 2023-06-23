rm *.o
rm *exe

clang -c circle.c circle_main.c
clang -o circle_exe circle.o circle_main.o

./circle_exe