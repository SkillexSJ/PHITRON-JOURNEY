
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

void deleteAtTail(Node *&head, Node *&tail, int idx)
{

    Node *temp = head;

    for (int i = 1; i < idx - 1; i++) // oi ghorer ag porjonto loop chalay jabo
    {
        temp = temp->next;
    }

    Node *deletenode = temp->next; // jake delte korbo take eikhane boshabo

    temp->next = temp->next->next; // eita visualize kore bujho porer ghorer porer ghor

    delete deletenode; // tarpor delete

    tail = temp; // boshay dibo tail ta track rakhar jonoo
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

    // PrintLinkList(head);

    deleteAtTail(head, tail, 7);

    PrintLinkList(head);

    return 0;
}
