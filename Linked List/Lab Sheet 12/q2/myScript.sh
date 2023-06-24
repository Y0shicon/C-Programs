rm *.o
rm *exe

clang -c *.c
clang -o main_exe *.o

./main_exe