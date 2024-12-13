
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int roll;
    string name;
    int marks;
};

int main()
{

    int n;
    cin >> n;

    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, st[i].name);
        cin >> st[i].roll >> st[i].marks;
    }

    Student max;

    max.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (st[i].marks > max.marks)
        {
            max = st[i];
        }
    }

    cout << max.name;

    return 0;
}
