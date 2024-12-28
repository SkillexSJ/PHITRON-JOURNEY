
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

int take_size(Node *&head)
{
    int count = 0;
    if (head == NULL)
    {
        return count;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

Node *get_intersection(Node *head, Node *head2, int size, int size2)
{

    Node *temp1 = head;
    Node *temp2 = head2;

    int diff = abs(size - size2);

    if (size > size2)
    {
        while (diff--)
        {
            temp1 = temp1->next;
        }
    }
    else
    {
        while (diff--)
        {
            temp2 = temp2->next;
        }
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
        {
            return temp1;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return NULL;
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

    int size = take_size(head);

    Node *head2 = NULL, *tail2 = NULL;

    while (true)
    {
        int val;

        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_in_tail(head2, tail2, val);
    }

    int size2 = take_size(head2);

    Node *intersection = get_intersection(head, head2, size, size2);

    cout << intersection->val << endl;

    return 0;
}
