
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

    if (tail == NULL) // corner case
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail; // eita just notun ager Node er sath ektu jukto kore dibe
    tail = newnode;       // tail er address newnode er address e set kore dibe
}

void inser_at_any(Node *&head, Node *&tail, int idx, int val)
{

    Node *temp = head;

    Node *newNode = new Node(val);

    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next; // age newnode er sathe tar poer node er connection dibo
    temp->next->prev = newNode; // tarpor prev er connectio tao porer node er sathe dibo
    temp->next = newNode;       // ekhon ager motoi newnode er sathe ager node er connection dibo
    newNode->prev = temp;       // newnode er prev er connection ager node er sathe dibo
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

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int n;
        cin >> n;

        if (n == -1)
        {
            break;
        }

        insert_at_tail(head, tail, n);
    }

    print_doubly(head);
    return 0;
}
