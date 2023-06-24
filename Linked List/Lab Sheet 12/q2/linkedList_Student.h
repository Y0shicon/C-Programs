#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct linkedList {
    int count;
    struct node *head;
}*LIST;

typedef struct node
{
    char ID[25];
    char name[30];
    char dept[20];
    int math_marks;
    int phy_marks;
    int chem_marks;
    struct node *next;
}*NODE;

LIST createNewList();
NODE createNewNode(char *ID, char *name, char *dept, int maths_marks, int phy_marks, int chem_marks);
void insertNodeAtStart(LIST linked_list, NODE node);
void insertNodeAtEnd(LIST linked_list, NODE node);
void insertNodeAfterElem(char *ID, LIST linked_list, NODE node);
void removeNodeAtStart(LIST linkedList);
void removeNodeAtEnd(LIST linkedList);
void removeElement(char *ID, LIST linkedList);
void printList(LIST linkedList);
int find(float key, LIST linkedList);

#endif