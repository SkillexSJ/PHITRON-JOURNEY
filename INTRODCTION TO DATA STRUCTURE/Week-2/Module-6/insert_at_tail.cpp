
#include <bits/stdc++.h>
using namespace std;

// eitar Time Complexity hobe O(N^2) jeita onek kharap;

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

void insertAtTail(Node *&head, int val) // main func theke head and value anlam ... ar head ke reference hishebe anlam karon tar pointer ami change korbo
{
    Node *newnode = new Node(val); // age ekta node banay nibo

    if (head == NULL) // jodi kono kisui na thake linked list e tahole ei shorto
    {
        head = newnode;
        return;
    }

    Node *temp = head; // ekta temp dhore nibo jeita ghurte ghurte sesh porjonto jabe

    while (temp->next != NULL) // jokhon seshe chole ashbo tokhon ber hoye jabo
    {
        temp = temp->next;
    }

    temp->next = newnode; // ekhon bortomane temp ase ekdom last node er next e oikhanei amar newnode er address boshay dibo
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

    insertAtTail(head, 100);

    PrintLinkList(head);

    return 0;
}
