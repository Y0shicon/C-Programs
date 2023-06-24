#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(){
    LIST linkedList = createNewList();

    NODE node1 = createNewNode(6.2);
    NODE node2 = createNewNode(8.12);
    NODE node3 = createNewNode(53.2);
    NODE node4 = createNewNode(2.62);
    NODE node5 = createNewNode(8.66);

    insertNodeAtStart(linkedList, node1);
    insertNodeAtEnd(linkedList, node2);
    insertNodeAtStart(linkedList, node3);
    insertNodeAfterElem(6.2,linkedList, node4);
    insertNodeAtStart(linkedList, node5);

    removeNodeAtEnd(linkedList);
    removeNodeAtEnd(linkedList);
    removeNodeAtStart(linkedList);

    printList(linkedList);
}