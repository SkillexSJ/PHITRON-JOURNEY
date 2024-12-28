
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

int size_of_list(Node *&head)
{

    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        count++;

        temp = temp->next;
    }

    return count;
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

    int n;
    cin >> n;
    int size = size_of_list(head);

    int to_remove = size - n;

    Node *temp = head;

    for (int i = 0; i < to_remove - 1; i++) // delete at any position
    {
        temp = temp->next;
    }

    Node *temp1 = head;

    for (int i = 0; i < n - 1; i++)
    {
        temp1 = temp1->next;
    }

    swap(temp->val, temp1->val);

    return 0;
}
