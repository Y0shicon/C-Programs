rm *.o
rm *_exe

clang -c *.c
clang -o StudentMngmt_exe *.o

./StudentMngmt_exe