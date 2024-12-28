
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

void duplicate_of_list(Node *&head)
{

    Node *temp = head;

    vector<int> freq(100, 0);

    while (temp != NULL)
    {

        freq[temp->val]++;

        temp = temp->next;
    }

    bool hoise = false;

    for (int i = 0; i < 100; i++)
    {
        if (freq[i] > 1)
        {
            hoise = true;
            break;
        }
    }

    if (hoise)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO";
    }
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

    duplicate_of_list(head);

    return 0;
}
