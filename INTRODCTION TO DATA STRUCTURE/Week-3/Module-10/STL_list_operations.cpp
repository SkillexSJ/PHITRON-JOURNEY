
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 2, 4, 2, 5};

    myList.remove(2); // Removes all occurrences of 2 from the list

    myList.sort(); // Sorts the list in ascending order...there can be many ways to sort a list

    myList.reverse(); // Reverses the list

    myList.unique(); // Removes all consecutive duplicates from the list..it can happen only if the list is sorted

    ////////////////////////Elements access////////////////////////

    myList.front();          // Returns the first element of the list
    myList.back();           // Returns the last element of the list
    next(myList.begin(), 2); // Returns an iterator pointing to the 3rd element
    return 0;
}
