
#include <bits/stdc++.h>
using namespace std;

// eitar Time Complexity hobe O(1);

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

void insertAtTail(Node *&head, Node *&tail, int val) // main func theke head and value anlam ... ar head ke reference hishebe anlam karon tar pointer ami change korbo
{
    Node *newnode = new Node(val); // age ekta node banay nibo

    if (head == NULL) // jodi kono kisui na thake linked list e tahole ei shorto
    {
        head = newnode;
        tail = newnode; // jodi list e ekatai node thake tahole oitai "head" oitai "tail"
        return;
    }

    tail->next = newnode; // age connection ta diye nibo

    tail = newnode; // tarpor notun node ke tai banay dibo
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

    Node *head = NULL; // dhoore nibo age je kisu nai
    Node *tail = NULL; // tail track rakhle optimized way te kora jay

    while (true) // infinty loop nite thakbo joto khon na -1 ashsche
    {
        int val;
        cin >> val;

        if (val == -1) // manually -1 ddeya thakbe oita pailei looop off
        {
            break;
        }

        insertAtTail(head, tail, val); // protibar tail e nite thakbo
    }

    PrintLinkList(head);

    return 0;
}
