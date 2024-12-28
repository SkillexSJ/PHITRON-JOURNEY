
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
    else
    {

        tail->next = newnode;

        tail = newnode;
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

        insert_at_tail(head, tail, val);
    }

    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *temp = head;

    int sum = 0;

    while (temp != NULL)
    {
        if (temp->val == 0)
        {
            if (sum != 0)
            {
                insert_at_tail(head1, tail1, sum);
            }
            sum = 0;
        }
        else
        {
            sum = sum + temp->val;
        }

        temp = temp->next;
    }

    if (sum != 0) // jodi last e 0 na thake
    {
        insert_at_tail(head1, tail1, sum);
    }

    return 0;
}
