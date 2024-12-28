
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
    head->prev = newnode; // eita just notun ager Node er sath ektu jukto kore dibe
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

    tail->next = newnode; // Link the current tail to the new node
    newnode->prev = tail; // Link the new node's previous to the current tail
    tail = newnode;       // Update the tail to the new node
}

void insert_at_any(Node *&head, Node *&tail, int idx, int val, int size)
{

    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }
    if (idx == size)
    {
        insert_at_tail(head, tail, val);
        return;
    }

    Node *temp = head;

    Node *newNode = new Node(val);

    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next; // age newnode er sathe tar poer node er connection dibo
    temp->next->prev = newNode; // tarpor prev er connectio tao porer node er sathe dibo
    temp->next = newNode;       // ekhon ager motoi newnode er sathe ager node er connection dibo
    newNode->prev = temp;       // newnode er prev er connection ager node er sathe dibo
}

int doubly_size(Node *head)
{
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void print_doubly(Node *head)
{

    Node *temp = head;
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
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main()
{
    int q;

    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    int size = 0;

    while (q--)
    {

        int x, v;
        cin >> x >> v;

        if (x > size)
        {

            cout << "Invalid" << endl;
            continue;
        }

        if (x == 0)
        {

            insert_at_head(head, tail, v);
        }
        else if (x == size)
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            insert_at_any(head, tail, x, v, size);
        }

        size++;
        print_doubly(head);
        print_doubly_reverse(tail);
    }

    return 0;
}
