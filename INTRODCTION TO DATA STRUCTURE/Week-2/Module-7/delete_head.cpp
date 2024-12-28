
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

void deleteAtHead(Node *&head)
{
    Node *deletenode = head; // eikhane ekta alada node banay jake delete korbo take boshay dibo

    head = head->next; // head ta ke change kore tar porer node er dike point kore dibo tokhon oita head hobe

    delete deletenode; // dynamically ekhon eita delete kore dibo memory theke
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

    deleteAtHead(head);

    PrintLinkList(head);

    return 0;
}
