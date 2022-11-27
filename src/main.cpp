#include <stdio.h>
#include <stdlib.h>
#include "list/list.h"


int main(int, char**) {

    ListNode* list = createList(100);
    printList(list);
    pushFront(200, &list);
    printList(list);
    pushBack(300, list);
    printList(list);
    pushBack(400, list);
    printList(list);
    insert(350, list, 2);
    printList(list);
    insert(250, list, 0);
    printList(list);
    int pop = popFront(&list);
    printf("deleted value = %i\n", pop);
    printList(list);

    return 0;
}