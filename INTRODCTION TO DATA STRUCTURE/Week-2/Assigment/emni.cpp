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

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
    {
        tail = head;
    }
}

void insertAtTail(Node *&head, Node *&tail, int val)
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

void deleteAtIndex(Node *&head, Node *&tail, int idx)
{
    if (idx < 0 || head == NULL)
        return;

    if (idx == 0)
    {
        Node *deletenode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deletenode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
            return;
        temp = temp->next;
    }

    Node *deletenode = temp->next;
    if (deletenode == NULL)
        return;
    temp->next = deletenode->next;
    if (deletenode == tail)
    {
        tail = temp;
    }
    delete deletenode;
}

void printList(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insertAtHead(head, tail, V);
        }
        else if (X == 1)
        {
            insertAtTail(head, tail, V);
        }
        else if (X == 2)
        {
            deleteAtIndex(head, tail, V);
        }

        printList(head);
    }

    return 0;
}
