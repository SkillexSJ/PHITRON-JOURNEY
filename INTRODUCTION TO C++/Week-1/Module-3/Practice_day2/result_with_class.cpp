
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    char name[100];
    int roll;
    char section[100];
    int math_marks;
    int cls;

    Student(const char *n, int roll, const char *s, int math_marks, int cls)
    {

        strcpy(name, n);
        this->roll = roll;
        strcpy(section, s);
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{

    Student st2("abul", 10, "green", 80, 9);
    Student st1("babul", 5, "yellow", 100, 9);
    Student st3("habul", 15, "green", 10, 9);

    if (st1.math_marks > st2.math_marks && st1.math_marks > st3.math_marks)
    {
        cout << st1.name << "" << st1.section << endl;
    }

    else if (st2.math_marks > st1.math_marks && st2.math_marks > st3.math_marks)
    {
        cout << st2.name << "" << st2.section << endl;
    }

    else
    {
        cout << st3.name << "" << st3.section << endl;
    }

    return 0;
}
