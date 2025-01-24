
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

class Myqueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz;

    void push(int val)
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
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }

        head->prev = NULL;
    }

    int front()
    {

        return head->val;
    }

    int size()
    {

        return sz;
    }

    bool empty()
    {

        return head == NULL;
    }

    int back()
    {

        return tail->val;
    }
};

int main()
{

    Myqueue q;

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // if (!q.empty()) // eitao stack er moto check kore nibo
    // {
    //     q.push(60);
    // }
    // if (!q.empty())
    // {
    //     q.pop();
    // }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
