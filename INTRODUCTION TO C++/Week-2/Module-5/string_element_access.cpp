
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Hello, World!";
    cout << str[0] << endl; // Output: H  // eita normal niyom
    cout << str[7] << endl; // Output: W

    str.at(0); // eita [ ] eitar motoi;

    for (string::iterator it = str.begin(); it != str.end(); ++it) // eita holo iterator system jokhon DSA shikhbo tokhon kaje lagbe
    {
        cout << *it << " ";
    }

    for (char ch : str) // eita holo range for loop index er jhamela na thakle eita use korte pari
    {
        cout << ch << " ";
    }

        return 0;
}
