#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{
    BOOK book = {ID, shelfNum, price};
    return book;
}

void printBook(BOOK book1)
{
    printf("\n ID : %d \n", book1.ID);
    printf("Shelf Num : %d \n", book1.shelfNum);
    printf("Price : %f \n", book1.price);
   return;
}