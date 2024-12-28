
#include <bits/stdc++.h>
using namespace std;

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

void insertAtHead(Node *&head, int val)
{

    Node *newnode = new Node(val);

    newnode->next = head;

    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    tail->next = newnode;

    tail = newnode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    int val;
    cin >> val;

    while (head != NULL && head->val == val) // eikhane jodi head e amar target value thake tahole head ke next e set korbo
    {
        head = head->next; // jemon 7 7 7 7 er khetre
    }

    Node *temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        if (temp->next->val == val)
        {
            temp->next = temp->next->next;
        }

        temp = temp->next;
    }

    return 0;
}
