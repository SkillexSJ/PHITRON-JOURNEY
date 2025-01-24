#include <bits/stdc++.h>

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

class Queue
{

    Node *head;
    Node *tail;
    int sz;

public:
    Queue()
    {

        head = NULL;
        tail = NULL;
        sz = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        return head == NULL;
    }

    void enqueue(int data)
    {

        sz++;
        Node *newnode = new Node(data);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        sz--;
        Node *deletenode = head;
        int frontVal = head->val;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
        }
        return frontVal;
    }

    int front()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->val;
    }
};