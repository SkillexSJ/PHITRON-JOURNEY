
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

Node insertAtHead(Node *&head, int val) // main func theke head and value anlam ... ar head ke reference hishebe anlam karon tar pointer ami change korbo
{
    Node *newnode = new Node(val); // ekta temp dhore nibo jeita ghurte ghurte sesh porjonto jabe

    newnode->next = head; // ekhon age newnode e head er address boshay nibo jaate haray na jay

    head = newnode; // eita jodi na kortam tahole ajibon main er head e thakto ei newnode er kono dekha paitam na tai tare head banay dimu
}

Node PrintLinkList(Node *&head)
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

    insertAtHead(head, 100);

    PrintLinkList(head);

    return 0;
}
