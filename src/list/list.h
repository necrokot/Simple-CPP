struct ListNode
{
    int data;
    ListNode *next;
};

void printList(ListNode *head);

ListNode* createList (int data);

void pushFront (int data, ListNode** list);

void pushBack (int data, ListNode* list);

void insert (int data, ListNode* list, int index);

int popFront (ListNode** list);