
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
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

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

        return head == NULL;
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
    Mystack s;
    Myqueue q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (s.size() != q.size())
    {
        cout << "NO" << endl;
    }

    else
    {
        bool hoise = true;

        while (!q.empty())
        {
            if (q.front() != s.top())
            {
                hoise = false;
                break;
            }
            q.pop();
            s.pop();
        }

        (hoise) ? cout << "YES" : cout << "NO";
    }
    return 0;
}
