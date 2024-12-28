
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

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(10);
    Node *third = new Node(30);

    first->next = second;

    second->next = third;

    Node *temp = first; // temp e niye nibo tahole head ta haranor voy thake na

    while (temp != NULL) /// eita ekdom seshe giye thambe
    {
        cout << temp->val << endl;

        temp = temp->next; // protibar next node ke nite thakbe
    }

    return 0;
}
