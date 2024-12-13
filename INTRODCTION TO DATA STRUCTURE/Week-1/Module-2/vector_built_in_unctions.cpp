
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    // Initialization
    vector<int> v1;        // Empty vector
    vector<int> v2(5);     // Vector with 5 elements initialized to 0
    vector<int> v3(5, 10); // Vector with 5 elements initialized to 10
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v4(arr, arr + 5); // Vector initialized with array elements

    cout << "Initialization examples:\n";
    for (int i : v4)
        cout << i << " "; // Print v4
    cout << "\n";

    // Capacity
    //////////
    //////////
    cout << "\nCapacity examples:\n";
    cout << "Size: " << v4.size() << "\n";
    cout << "Max Size: " << v4.max_size() << "\n";
    cout << "Capacity: " << v4.capacity() << "\n";
    cout << "Is empty: " << (v4.empty() ? "Yes" : "No") << "\n";

    // Modifiers
    ///////////
    //////////

    cout << "\nModifier examples:\n";
    v4.push_back(6); // Add element
    cout << "After push_back(6): ";
    for (int i : v4)
        cout << i << " ";
    cout << "\n";

    v4.pop_back(); // Remove last element
    cout << "After pop_back(): ";
    for (int i : v4)
        cout << i << " ";
    cout << "\n";

    v4.insert(v4.begin() + 2, 99); // Insert at position 2
    cout << "After insert(2, 99): ";
    for (int i : v4)
        cout << i << " ";
    cout << "\n";

    v4.erase(v4.begin() + 2); // Erase from position 2
    cout << "After erase(2): ";
    for (int i : v4)
        cout << i << " ";
    cout << "\n";

    replace(v4.begin(), v4.end(), 3, 33); // Replace all 3 with 33
    cout << "After replace(3, 33): ";
    for (int i : v4)
        cout << i << " ";
    cout << "\n";

    auto it = find(v4.begin(), v4.end(), 33); // Find 33
    if (it != v4.end())
    {
        cout << "Found 33 at position: " << std::distance(v4.begin(), it) << "\n";
    }
    else
    {
        cout << "33 not found\n";
    }

    // Element access
    /////////////////
    ////////////////
    cout << "\nElement access examples:\n";
    cout << "First element: " << v4.front() << "\n";
    cout << "Last element: " << v4.back() << "\n";
    cout << "Element at index 1: " << v4[1] << "\n";

    // Iterators
    ////////////
    ///////////
    cout << "\nIterator examples:\n";
    cout << "Using iterator to print elements: ";
    for (auto it = v4.begin(); it != v4.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
