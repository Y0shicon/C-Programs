rm *.o
rm *_exe

clang -c book_fun.c books_catalog.c main_library.c
clang -o main_exe book_fun.o books_catalog.o main_library.o

./main_exe
