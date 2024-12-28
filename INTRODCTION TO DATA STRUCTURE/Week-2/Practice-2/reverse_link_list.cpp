
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

void insert_in_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;

        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void reverse_print(Node *&head)
{
    if (head == NULL)
    {

        return;
    }

    reverse_print(head->next);

    cout << head->val << " ";
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

        insert_in_tail(head, tail, val);
    }

    reverse_print(head);

    return 0;
}
