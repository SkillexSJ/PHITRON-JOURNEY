
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

void delete_at_tail(Node *&head, Node *&tail)
{

    if (tail == NULL)
    {
        head = NULL;
        return;
    }

    Node *deleteode = tail;

    tail = tail->prev;
    tail->next = NULL; // shob ager motoi khali next e null bohsay dibo karon tail er pore kono node nai
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

    delete_at_tail(head, tail);

    print_doubly(head);

    return 0;
}
