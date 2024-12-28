
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    print_doubly(head);

    inser_at_any(head, tail, 1, 5);

    print_doubly(head);

    return 0;
}
