
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

void reverse(Node *&head, Node *&tail, Node *temp)
{

    if (temp->next == NULL) // temp jokhon seshe chole ashbe
    {

        head = temp; // sesh ke head banabo
        return;
    }

    reverse(head, tail, temp->next); // recursive call
    temp->next->next = temp;         // eita ektu visuazlize korte hobe
    temp->next = NULL;               // Change korar por NULL korte hobe
    tail = temp;                     // tail ke update korte hobe
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

    reverse(head, tail, head);
    display(head);

    return 0;
}
