
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

void insertAtAny(Node *&head, int idx, int val) // main func theke head and value anlam ... ar head ke reference hishebe anlam karon tar pointer ami change korbo
{
    Node *newnode = new Node(val);

    Node *temp = head;

    for (int i = 1; i < idx; i++) // ekta kalponik index dhore nibo jeita amar kankhito index er ag porjonto cholbe
    {
        temp = temp->next; // eivabe agate thakbe;
    }

    newnode->next = temp->next; // age porer tar sathe conncect kore nite hobe nahole oita haray jabe

    temp->next = newnode; // ekhon khali new node er sathe jukto kore dibo er ager index er sathe
}

void PrintLinkList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";

        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insertAtAny(head, 2, 100);

    PrintLinkList(head);

    return 0;
}
