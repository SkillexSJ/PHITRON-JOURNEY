
#include <bits/stdc++.h>
using namespace std;

int n = 10;

int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
vector<int> v(10);

int main()
{
    // default constructor
    list<int> lst1;

    // Fill constructor
    list<int> lst2(5, 10); // 5 elements, each initialized to 10
    cout << "List initialized with 5 elements of value 10: ";
    // Should print 10 10 10 10 10

    // Range constructor (copy from another list)
    list<int> lst3(lst2.begin(), lst2.end()); // Copying lst2 into lst3
    list<int> lst3(a, a + n);                 // Copying an array into lst3
    list<int> lst3(v.begin(), v.end());       // Copying a vector into lst3

    // Add elements using push_front and push_back
    lst3.push_front(5); // Adds 5 at the front
    lst3.push_back(20); // Adds 20 at the back
    cout << "After push_front(5) and push_back(20): ";
    for (int i : lst3)
        cout << i << " "; // Should print 5 10 10 10 10 10 20
    cout << endl;

    return 0;
}
