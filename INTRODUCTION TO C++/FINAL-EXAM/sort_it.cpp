
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool comp(Student l, Student r)
{

    int total_l = l.eng_marks + l.math_marks;
    int total_r = r.eng_marks + r.math_marks;

    if (total_l == total_r)
    {
        return l.id < r.id;
    }

    if (total_l > total_r)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();

        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}
