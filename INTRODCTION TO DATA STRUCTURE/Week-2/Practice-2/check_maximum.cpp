
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

void insert_in_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;

        return;
    }

    tail->next = newnode;
    tail = newnode;
}

int check_max(Node *&head)
{
    int max_check = INT_MIN;

    Node *temp = head;

    while (temp != NULL)
    {
        max_check = max(max_check, temp->val);

        temp = temp->next;
    }

    return max_check;
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

        insert_in_tail(head, tail, val);
    }

    int max_check = check_max(head);

    cout << max_check;

    return 0;
}
