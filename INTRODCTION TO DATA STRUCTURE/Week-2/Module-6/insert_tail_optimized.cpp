
#include <bits/stdc++.h>
using namespace std;

// eitar Time Complexity hobe O(1);

class Node
{

public:
    int val;
    Node *next;

    Node(int val)
    {

        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int val) // main func theke head and value anlam ... ar head ke reference hishebe anlam karon tar pointer ami change korbo
{
    Node *newnode = new Node(val); // age ekta node banay nibo

    if (head == NULL) // jodi kono kisui na thake linked list e tahole ei shorto
    {
        head = newnode;
        tail = newnode; // jodi list e ekatai node thake tahole oitai "head" oitai "tail"
        return;
    }

    tail->next = newnode; // age connection ta diye nibo

    tail = newnode; // tarpor notun node ke tai banay dibo
}

void PrintLinkList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";

        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30); // ekhon amra tail keo point kore dibo head er moto

    head->next = a;
    a->next = tail;

    insertAtTail(head, tail, 100);

    PrintLinkList(head);

    return 0;
}
