
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int roll;
    string name;
    int marks;
};

bool comp(Student l, Student r)
{

    // if (l.marks > r.marks) // ei ekta way
    // {
    //     return true;
    // }

    // else
    // {
    //     return false;
    // }

    // return l.marks > r.marks; // eije arekta

    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks; // eita shobcheye shortcut
}

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

    sort(st, st + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }
    return 0;
}