rm *.o
rm *exe

gcc -c reverseArray_main.c reverseArray_PassByReference.c reverseArray_PassByPointers.c 

gcc -o reverse_exe reverseArray_main.o reverseArray_PassByReference.o reverseArray_PassByPointers.o

./reverse_exe
