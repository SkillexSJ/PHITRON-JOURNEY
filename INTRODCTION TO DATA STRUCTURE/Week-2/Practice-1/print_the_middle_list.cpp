
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

int size_of_list(Node *&head, int count)
{

    Node *temp = head;

    while (temp != NULL)
    {
        count++;

        temp = temp->next;
    }

    return count;
}

void print_multiple_ele(Node *&head, int idx)
{
    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    cout << temp->val << " " << temp->next->val;
}

void print_mid_ele(Node *&head, int idx)

{
    Node *temp = head;

    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }

    cout << temp->val;
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

    int size = size_of_list(head, 0);

    if (size % 2 == 0)
    {
        print_multiple_ele(head, size / 2);
    }

    else
    {

        print_mid_ele(head, size / 2);
    }

    return 0;
}
