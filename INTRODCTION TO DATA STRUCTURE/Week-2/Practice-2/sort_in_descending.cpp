
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

void sort_in_descending(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {

        return;
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void print_linked_list(Node *&head)
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

    sort_in_descending(head);

    print_linked_list(head);

    return 0;
}
