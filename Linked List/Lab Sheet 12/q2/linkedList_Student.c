#include "linkedList_Student.h"

#include <stdio.h>
#include <stdlib.h>

LIST createNewList()
{
    LIST linkedList;
    linkedList = (LIST)malloc(sizeof(LIST));
    linkedList->count = 0;
    linkedList->head = NULL;

    return linkedList;
}

NODE createNewNode(char *ID, char *name, char *dept, int maths_marks, int phy_marks, int chem_marks)
{
    NODE node;
    node = (NODE)malloc(sizeof(struct node));

    // Adding ID
    for (int i = 0; ID[i] != '\0'; i++)
        node->ID[i] = ID[i];

    // Adding Name
    for (int i = 0; name[i] != '\0'; i++)
        node->name[i] = name[i];

    // Adding Department
    for (int i = 0; dept[i] != '\0'; i++)
        node->dept[i] = dept[i];

    // Adding the marks
    node->math_marks = maths_marks;
    node->phy_marks = phy_marks;
    node->chem_marks = chem_marks;

    node->next = NULL;

    return node;
}

void insertNodeAtStart(LIST linkedList, NODE node)
{
    if (linkedList->count == 0)
    {
        linkedList->head = node;
    }
    else
    {
        node->next = linkedList->head;
        linkedList->head = node;
    }
    linkedList->count++;
}

void insertNodeAtEnd(LIST linked_list, NODE node)
{
    if (linked_list->count == 0)
    {
        linked_list->head = node;
    }
    else
    {
        NODE TEMP = linked_list->head;
        while (TEMP->next != NULL)
            TEMP = TEMP->next;
        TEMP->next = node;
    }
    linked_list->count++;
}

int strLen(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++)
        ;
    return i;
}

int compareString(char *str1, char *str2)
{
    if (strLen(str1) != strLen(str2))
        return 0;
    for (int i = 0; i < strLen(str1); i++)
    {
        if (str1[i] != str2[i])
            return 0;
    }
    return 1;
}

void insertNodeAfterElem(char *ID, LIST linked_list, NODE node)
{
    if (linked_list->count == 0)
    {
        linked_list->head = node;
    }
    else
    {
        NODE TEMP = linked_list->head;
        NODE PREV = TEMP;
        while (TEMP != NULL)
        {
            if (compareString(TEMP->ID, ID))
                break;
            PREV = TEMP;
            TEMP = TEMP->next;
        }

        if (TEMP == NULL)
        {
            printf("Element not found\n");
        }
        else if (TEMP->next == NULL)
        {
            TEMP->next = node;
            node->next = NULL;
            linked_list->count++;
        }
        else
        {
            PREV = TEMP;
            TEMP = TEMP->next;
            PREV->next = node;
            node->next = TEMP;
            linked_list->count++;
        }
    }
}

void removeNodeAtStart(LIST linkedList)
{
    if (linkedList->count == 1)
    {
        linkedList->head = NULL;
        linkedList->count--;
    }
    else if (linkedList->count == 0)
        printf("Cant remove from an empty linked list");
    else
    {
        linkedList->head = linkedList->head->next;
        linkedList->count--;
    }
}

void removeNodeAtEnd(LIST linkedList)
{
    if (linkedList->count == 0)
        printf("Cant remove from an empty linked list");
    else if (linkedList->count == 1)
    {
        free(linkedList->head);
        linkedList->head = NULL;
        linkedList->count--;
    }
    else
    {
        NODE TEMP = linkedList->head;
        NODE PREV = TEMP;
        while (TEMP->next != NULL)
        {
            PREV = TEMP;
            TEMP = TEMP->next;
        }
        free(TEMP);
        PREV->next = NULL;
        linkedList->count--;
    }
}

void removeElement(char *ID, LIST linkedList)
{
    if (linkedList->count == 0)
    {
        printf("CANT REMOVE FROM AN EMPTY LIST\n");
    }
    else
    {
        NODE TEMP = linkedList->head;
        NODE PREV = TEMP;
        while (TEMP != NULL)
        {
            if (compareString(TEMP->ID, ID))
                break;
            PREV = TEMP;
            TEMP = TEMP->next;
        }
        if (TEMP == NULL)
        {
            printf("Couldn't find the element\n");
        }
        else if (TEMP->next == NULL)
        {
            PREV->next = NULL;
            free(TEMP);
            linkedList->count--;
        }
        else
        {
            if (linkedList->count == 2)
            {
                linkedList->head = TEMP->next;
            }
            else
            {
                PREV->next = TEMP->next;
                free(TEMP);
            }
            linkedList->count--;
        }
    }
}

void printList(LIST linkedList)
{
    NODE TEMP = linkedList->head;
    for (int i = 0; i < linkedList->count; i++)
    {
        printf("Node %d -> \nID : %s\n", i + 1, TEMP->ID);
        printf("Name : %s\n", TEMP->name);
        printf("Department : %s\n", TEMP->dept);
        printf("Maths Marks : %d\n", TEMP->math_marks);
        printf("Chemistry Marks : %d\n", TEMP->chem_marks);
        printf("Physics Marks : %d\n\n", TEMP->phy_marks);
        TEMP = TEMP->next;
    }
}