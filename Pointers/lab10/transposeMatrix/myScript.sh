rm *.o
rm *exe

gcc -c *.c
gcc -o main_exe *.o

./main_exe