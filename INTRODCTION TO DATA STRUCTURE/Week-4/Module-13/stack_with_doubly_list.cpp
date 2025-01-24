
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {

        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Mystack
{

public:
    Node *head = NULL; // eita main e rakhbo na karon main e amar stack thakbe
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // ami kintu head tail ke eikhane parameter rakhi nai karon eita eki class er vitor ase tai lagbe na
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node *deletenode = tail;

        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }

        tail->next = NULL;
    }

    int top()
    {

        return tail->val;
    }

    int size()
    {

        return sz;
    }

    bool empty()
    {

        return head == NULL; // head null manei to list khali
    }
};

int main()
{

    Mystack st;

    st.push(10);
    st.push(30);
    st.push(20);

    cout << st.size() << endl;

    if (!st.empty()) // jodi single vabe dekhte chai tahole oboshhhoi check kore nite hobe khali kina
    {
        cout << st.top() << endl;
    }

    if (!st.empty()) // jodi single vabe delete korte chai tahole oboshhhoi check kore nite hobe khali kina
    {
        st.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    cout << st.size() << endl;

    return 0;
}
