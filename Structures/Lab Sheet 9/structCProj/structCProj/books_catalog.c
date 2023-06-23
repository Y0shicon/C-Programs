#include "books_catalog.h"

void addBookToCatalog(BOOK book1)
{
    booksCatalog[count] = book1;
    count++;
    // printf("Added a book\n");
    return;
    
}

void printBookCatalog()
{
    for (int i = 0; i < count; i++)printBook(booksCatalog[i]);
    // printf("Printed the catalog\n");
    return;
}

void sortBookCatalogOnID()
{
    for (int i = 0; i < count; i++)
    {
        int min = i;
        for (int j = i + 1; j < count; j++)
        {
            if (booksCatalog[min].ID > booksCatalog[j].ID) min = j;
        }
        BOOK temp = booksCatalog[i];
        booksCatalog[i] = booksCatalog[min];
        booksCatalog[min] = temp;
    }
    // printf("Sorted the catalog");

    return;
}