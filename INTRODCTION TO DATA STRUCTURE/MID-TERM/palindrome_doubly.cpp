
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

bool palindrome(Node *head, Node *tail)
{

    Node *start = head;
    Node *end = tail;

    while (start != end)
    {
        if (start->val != end->val)
        {
            return false;
        }

        start = start->next;
        end = end->prev;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    bool isPali = palindrome(head, tail);

    (isPali) ? cout << "YES" : cout << "NO";

    return 0;
}
