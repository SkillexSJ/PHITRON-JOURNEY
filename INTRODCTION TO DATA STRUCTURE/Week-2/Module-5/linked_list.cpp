
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;

    Node *next;
};

int main()
{

    Node first;
    Node second;
    Node third;

    first.val = 10;
    second.val = 20;
    third.val = 30;

    first.next = &second;

    second.next = &third;

    third.next = NULL;

    cout << first.val << endl;
    cout << (*first.next).val << endl;
    cout << (*first.next).next->val << endl;

    return 0;
}
