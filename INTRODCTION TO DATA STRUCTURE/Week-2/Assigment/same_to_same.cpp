
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

int take_size(Node *&head)
{
    int count = 0;
    if (head == NULL)
    {
        return count;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

bool same_to_same(Node *&head, Node *&head2)
{

    Node *temp = head;
    Node *temp2 = head2;

    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            return false;
        }

        temp = temp->next;
        temp2 = temp2->next;
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

        insert_in_tail(head, tail, val);
    }

    int size = take_size(head);

    Node *head2 = NULL, *tail2 = NULL;

    while (true)
    {
        int val;

        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_in_tail(head2, tail2, val);
    }

    int size2 = take_size(head2);

    if (size < size2 || size2 < size)
    {

        cout << "NO" << endl;
    }

    else
    {
        bool hoise = same_to_same(head, head2);

        (hoise) ? cout << "YES" : cout << "NO";
    }

    return 0;
}
