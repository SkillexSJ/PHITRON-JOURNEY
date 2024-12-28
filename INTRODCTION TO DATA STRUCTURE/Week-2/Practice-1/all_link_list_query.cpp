
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

void insertAtAny(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;

    temp->next = newnode;
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

void PrintLinkList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";

        temp = temp->next;
    }
    cout << endl;
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

    int size = size_of_list(head);

    int query;

    cin >> query;

    while (query--)
    {
        int idx, val;

        cin >> idx >> val;

        if (idx < 0 || idx > size)
        {

            cout << "Invalid" << endl;
        }

        else if (idx == size)
        {

            insert_at_tail(head, tail, val);
            PrintLinkList(head);
            size++;
        }

        else if (idx == 0)
        {
            insertAtHead(head, val);
            PrintLinkList(head);
            size++;
        }

        else
        {
            insertAtAny(head, idx, val);
            PrintLinkList(head);
            size++;
        }
    }

    return 0;
}
