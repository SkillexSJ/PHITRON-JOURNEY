
#include <bits/stdc++.h>
using namespace std;

int main()
{

    s.size();     // Returns the number of characters in the string
    s.length();   // Synonym for size()
    s.capacity(); // Returns the allocated storage capacity of the string

    s.resize(10);      // Resizes string to contain 10 characters, fills with '\0' or custom char
    s.resize(10, 'X'); // Resizes and fills extra space with 'X'
    s.reserve(20);     // Reserves space for at least 20 characters

    s.empty(); // Returns true if the string is empty

    return 0;
}
