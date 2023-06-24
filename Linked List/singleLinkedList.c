#include <stdio.h>
#include <stdlib.h>

// typedef struct node * NODE;
// struct node
// {
//     int value;
//     struct node * next;
// };

// typdef struct linked_list * LIST;
// struct linked_list{
//    int count;
// NODE head;
// };

typedef struct node
{
    int value;
    struct node *next;
}NODE;

typedef struct linked_list{
    int count;
    struct node * head;
}LIST;

// Returns a new linked list
LIST * createNewList (){
    LIST *myList;
    myList = (LIST*) malloc(sizeof(struct linked_list));
    myList -> count = 0;
    myList->head = NULL;
    return myList;
}

NODE * createNewNode (int value){
    NODE * myNode;
    myNode = (NODE *)malloc(sizeof(*myNode));
    myNode->value=value;
    myNode->next=NULL;
    return myNode;
}

void addNewNodeToBeginning(LIST * linked_list, NODE * node1){
    if (linked_list->count == 0){
        linked_list->head = node1;
    }
    else{
        node1->next = linked_list->head;
        linked_list->head = node1;
    }
    linked_list->count++;
}

void addNewNodeToEnd(LIST * linked_list, NODE * node1){
    if (linked_list->count == 0){
        linked_list->head = node1;
    }
    else{
        NODE * TEMP = linked_list->head;
        while (TEMP->next != NULL)
        {
            TEMP = TEMP->next;
        }
        TEMP->next = node1;
    }
    linked_list->count++;
}


void printMyList (LIST * linked_list){
    NODE * tempPointer = linked_list->head;
    while (tempPointer->next != NULL){
        printf("%d \t", tempPointer->value);
        tempPointer = tempPointer->next;
    }
    printf("%d \t", tempPointer->value);
    printf("\n");
    
}

int main(){

    LIST *linked_list = createNewList();

    NODE *node2 = createNewNode(5);
    NODE *node1 = createNewNode(6);
    NODE *node3 = createNewNode(16);

    addNewNodeToBeginning(linked_list, node3);
    addNewNodeToEnd(linked_list, node1);
    addNewNodeToBeginning(linked_list, node2);

    printMyList(linked_list);

    return 0;
}