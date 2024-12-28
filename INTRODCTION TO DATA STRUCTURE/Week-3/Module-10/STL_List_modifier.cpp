
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lst = {10, 20, 30, 40, 50};
    list<int> lst2 = {100, 200, 300, 400, 500};
    lst = lst2;                           // Copy lst2 into lst
    lst.assign(lst2.begin(), lst2.end()); // Copy lst2 into lst

    ///////////////////////////////////////////////////////////////////

    // 1. push_front(value) - Adds an element to the head of the list
    lst.push_front(5);

    // 2. push_back(value) - Adds an element to the tail of the list
    lst.push_back(60);

    // 3. pop_front() - Removes the head element of the list
    lst.pop_front();

    // 4. pop_back() - Removes the tail element of the list
    lst.pop_back();

    ///////////////////////////////////////////////////////////////////

    next(lst.begin(), 2);                    // Returns an iterator pointing to the 3rd element
    lst.insert(next(lst.begin(), 2), 25);    // Insert 25 at the 3rd position
    lst.erase(next(lst.begin(), 2));         // Erase the 3rd element
    replace(lst.begin(), lst.end(), 20, 30); // Replace all 20s with 30s
    find(lst.begin(), lst.end(), 30);        // Returns an iterator pointing to the first 30

    return 0;
}
