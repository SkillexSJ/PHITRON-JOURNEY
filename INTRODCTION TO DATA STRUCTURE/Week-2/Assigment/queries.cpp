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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void deleteAtAny(Node *&head, Node *&tail, int idx)
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

void PrintLinkList(Node *head)
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
    Node *head = NULL;
    Node *tail = NULL;

    int query;
    cin >> query;

    while (query--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insertAtHead(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {

            deleteAtAny(head, tail, v);
        }
        PrintLinkList(head);
    }

    return 0;
}
