#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct linkedList {
    int count;
    struct node *head;
}*LIST;

typedef struct node
{
    float value;
    struct node *next;
}*NODE;

LIST createNewList();
NODE createNewNode(float value);
void insertNodeAtStart(LIST linked_list, NODE node);
void insertNodeAtEnd(LIST linked_list, NODE node);
void insertNodeAfterElem(float key, LIST linked_list, NODE node);
void removeNodeAtStart(LIST linkedList);
void removeNodeAtEnd(LIST linkedList);
void removeElement(float key, LIST linkedList);
void printList(LIST linkedList);
int find(float key, LIST linkedList);

#endif



