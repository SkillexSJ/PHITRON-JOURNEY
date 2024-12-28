
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

void delete_at_head(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        tail = NULL;
        return;
    }

    Node *deleteode = head;

    head = head->next;
    head->prev = NULL; // shob ager motoi khali prev e null bohsay dibo karon head er ager kono node nai
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

    delete_at_head(head, tail);

    print_doubly(head);

    return 0;
}
