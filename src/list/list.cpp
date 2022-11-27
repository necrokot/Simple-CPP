#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void printList(ListNode *head) {
    while (head)
    {
        printf("%i\n", head->data);
        head  = head->next;
    }
    printf("\n");
}

ListNode* createList (int data) {
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    head->data = data;
    head->next = NULL;
    return head;
}

void pushFront (int data, ListNode** list) {
    ListNode* old_head = *list;
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    head->data = data;
    head->next = old_head;
    *list = head;
}

void pushBack (int data, ListNode* list) {
    ListNode* last = (ListNode*)malloc(sizeof(ListNode));
    last->data = data;
    last->next = NULL;
    while (list->next)
    {
        list = list->next;
    }
    list->next = last;
}

void insert (int data, ListNode* list, int index) {
    ListNode* find = list;
    for (int i = 0; find->next && i < index; i++)
    {
        find = find->next;
    }    
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = find->next;
    find->next = newNode;
}

int popFront (ListNode** list) {
    int value = (*list)->data;
    ListNode* tmp = *list;
    *list = (*list)->next;
    delete tmp;
    return value;
}