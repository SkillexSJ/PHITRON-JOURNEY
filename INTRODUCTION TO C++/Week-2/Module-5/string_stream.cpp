
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "valo aso vai";

    stringstream str(s); // eivabe neya jay

    str << s; // eivabeo jay

    string new_str; // ekta notn niye tar vitor dhukabo

    while (str >> new_str)
    {

        cout << new_str << endl;
    }

    return 0;
}
