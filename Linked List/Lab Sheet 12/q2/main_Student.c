#include <stdio.h>
#include "linkedList_Student.h"

int main(){
    LIST linkedList = createNewList();

    NODE node1 = createNewNode("0598", "Shreyas", "Economics", 100, 100, 100);
    NODE node2 = createNewNode("0541", "Bhindi", "ENI", 10, 10, 10);
    NODE node3 = createNewNode("0002", "Broccoli", "Manufacuring", 90, 70, 54);
    NODE node4 = createNewNode("10000", "HaraKebab", "General Studies", 0, 46,32);

    insertNodeAtStart(linkedList, node1);
    insertNodeAtStart(linkedList, node2);
    insertNodeAtEnd(linkedList, node3);
    insertNodeAfterElem("0598",linkedList, node4);

    removeNodeAtEnd(linkedList);
    removeNodeAtStart(linkedList);
    removeElement("0598", linkedList);

    printList(linkedList);
}