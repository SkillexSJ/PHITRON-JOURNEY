
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

void sort_link_list(Node *&head)
{

    for (Node *i = head; i->next != NULL; i = i->next) // i = 0 mone korbo and sesh ghorer agerr ghor porjonto cholbe
    {
        for (Node *j = i->next; j != NULL; j = j->next) // j = i+1 mone kkorbo and eita sesh ghor pojonto jabe
        {
            if (i->val > j->val) // checking hobe
            {
                swap(i->val, j->val); // eita swap er kaj hobe
            }
        }
    }
}

void insertAtHead(Node *&head, int val)
{
    Node *newnode = new Node(val);

    newnode->next = head;

    head = newnode;
}

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

void insertAtAny(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;

    temp->next = newnode;
}

int size_of_list(Node *&head)
{

    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        count++;

        temp = temp->next;
    }

    return count;
}

void PrintLinkList(Node *&head)
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

    sort_link_list(head);

    PrintLinkList(head);
    return 0;
}
