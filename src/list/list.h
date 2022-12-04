struct ListNode
{
    double data;
    ListNode *next;
};

void printList(ListNode *head);

ListNode* createList (double data);

void pushFront (double data, ListNode** list);

void pushBack (double data, ListNode* list);

void insert (double data, ListNode* list, int index);

double popFront (ListNode** list);