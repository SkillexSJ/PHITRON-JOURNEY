/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    Node *head;
    int sz;

public:
    Stack()
    {
        head = NULL;
        sz = 0;
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int data)
    {
        sz++;
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
    }

    int getTop()
    {
        if (head == NULL)
        {
            return -1;
        }
        return head->data;
    }
};