
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq; // eita ekta min priority queue
    pq.push(10);
    pq.push(20);
    pq.push(15);
    cout << pq.top() << endl;
    return 0;
}
