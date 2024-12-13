
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student st1;
        Student st2;
        Student st3;

        cin >> st1.id >> st1.name >> st1.section >> st1.total_marks;
        cin >> st2.id >> st2.name >> st2.section >> st2.total_marks;
        cin >> st3.id >> st3.name >> st3.section >> st3.total_marks;

        Student top_student = st1;

        if (st2.total_marks > top_student.total_marks ||
            (st2.total_marks == top_student.total_marks && st2.id < top_student.id))
        {
            top_student = st2;
        }

        if (st3.total_marks > top_student.total_marks ||
            (st3.total_marks == top_student.total_marks && st3.id < top_student.id))
        {
            top_student = st3;
        }

        cout << top_student.id << " " << top_student.name << " "
             << top_student.section << " " << top_student.total_marks << endl;
    }
    return 0;
}
