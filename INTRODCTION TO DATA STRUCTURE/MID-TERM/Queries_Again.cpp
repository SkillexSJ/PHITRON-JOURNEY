
#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);

    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void inser_at_any(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);

    if (idx == 0)
    {
        newNode->next = head;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        if (tail == NULL)
        {
            tail = newNode;
        }
        return;
    }

    Node *temp = head;

    for (int i = 0; i < idx - 1; i++)
    {

        temp = temp->next;
    }

    newNode->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;

    if (newNode->next == NULL)
    {
        tail = newNode;
    }
}

void print_doubly(Node *head)
{

    Node *temp = head;
    cout << "L" << " " << "->" << " ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_doubly_reverse(Node *tail)
{

    Node *temp = tail;
    cout << "R" << " " << "->" << " ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    int sz = 0;

    while (q--)
    {
        int x, v;

        cin >> x >> v;

        if (x > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (x == 0)
            {
                insert_at_head(head, tail, v);
                sz++;
            }

            else if (x == sz)
            {
                insert_at_tail(head, tail, v);
                sz++;
            }

            else
            {
                inser_at_any(head, tail, x, v);
                sz++;
            }
            print_doubly(head);
            print_doubly_reverse(tail);
        }
    }

    return 0;
}
