
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

    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    tail->next = newnode;

    tail = newnode;
}

void check_sort(Node *&head)
{

    Node *temp = head;

    bool hoise = true;

    while (temp != NULL && temp->next != NULL)
    {

        if (temp->val > temp->next->val)
        {
            hoise = false;
            break;
        }

        temp = temp->next;
    }

    if (hoise)
    {
        cout << "YES";
    }

    else

        cout << "NO";
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

    check_sort(head);

    return 0;
}
