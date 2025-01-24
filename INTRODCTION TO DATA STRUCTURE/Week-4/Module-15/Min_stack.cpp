#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{

    stack<int> s, min;

public:
    minStack()
    {
    }

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        s.push(num);
        if (min.empty() || num <= min.top())
        {
            min.push(num);
        }
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        if (s.empty())
            return -1;

        int topElement = s.top();
        s.pop();

        if (topElement == min.top())
        {
            min.pop();
        }

        return topElement;
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        return s.empty() ? -1 : s.top();
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()

    {
        return min.empty() ? -1 : min.top();
    }
};