
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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *tail = new Node(4);

    head->next = a;
    a->next = b;
    b->next = tail;
    tail->next = a; // eita holo mul karon cycle er jonno

    Node *slow = head;
    Node *fast = head;

    int flag = 0;
    while (fast != NULL && fast->next != NULL) // eita even odd uvoy list er condition
    {
        slow = slow->next;       // slow jabe ekta speed e
        fast = fast->next->next; // fast jabe double speed e

        if (fast == slow)
        {
            flag = 1;
            break;
        }
    }

    (flag == 0) ? cout << "No cycle detected" << endl : cout << "Cycle detected" << endl;

    return 0;
}
