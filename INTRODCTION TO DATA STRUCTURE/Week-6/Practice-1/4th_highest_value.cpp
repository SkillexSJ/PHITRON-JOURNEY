#include <bits/stdc++.h>
using namespace std;

int getFourthLargest(int arr[], int n)
{
    priority_queue<int> pq(arr, arr + n);
    int count = 1;
    if (n < 4)
        return INT_MIN;
    while (true)
    {

        if (count == 4)
        {
            return pq.top();
            break;
        }
        pq.pop();
        count++;
    }
}