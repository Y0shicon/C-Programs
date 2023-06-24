#include "linkedList.h"

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

NODE createNewNode(float value)
{
    NODE node;
    node = (NODE)malloc(sizeof(NODE));
    node->value = value;
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
            TEMP++;
        TEMP->next = node;
    }
    linked_list->count++;
}

void insertNodeAfterElem(float key, LIST linked_list, NODE node)
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
            if (TEMP->value == key)
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

void removeNodeAtEnd(LIST linkedList){
        if (linkedList->count == 0)
        printf("Cant remove from an empty linked list");
        else if (linkedList->count == 1){
            free(linkedList->head);
            linkedList->head = NULL;
            linkedList->count--;
        }
        else{
            NODE TEMP = linkedList->head;
            NODE PREV = TEMP;
            while (TEMP->next != NULL){
                PREV = TEMP;
                TEMP = TEMP->next;
            }
            free(TEMP);
            PREV->next= NULL;
            linkedList->count--;
        }
}



void printList(LIST linkedList){
    NODE TEMP = linkedList->head;
    for (int i = 0; i < linkedList->count; i++)
    {
        printf("Node %d -> Value : %f\n",i+1, TEMP->value);
        TEMP = TEMP->next;
    }
    
}