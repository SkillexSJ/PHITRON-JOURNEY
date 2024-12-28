
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};

    myList.size(); // Returns the number of elements in the list

    myList.max_size(); // Returns the maximum number of elements the list can hold

    myList.clear(); // Removes all elements from the list

    myList.empty(); // Returns true if the list is empty, false otherwise

    myList.resize(2);     // Resizes the list to 2 elements
    myList.resize(7, 10); // Resizes the list to 7 elements, filling the new elements with 10
    return 0;
}
