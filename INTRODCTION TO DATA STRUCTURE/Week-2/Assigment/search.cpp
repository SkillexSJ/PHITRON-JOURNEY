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
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

int search_in_list(Node *head, int search)
{
    Node *temp = head;
    int idx = 0;

    while (temp != NULL)
    {
        if (temp->val == search)
        {
            return idx;
        }
        temp = temp->next;
        idx++;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
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

        int search_val;
        cin >> search_val;

        int index = search_in_list(head, search_val);
        cout << index << endl;
    }

    return 0;
}
