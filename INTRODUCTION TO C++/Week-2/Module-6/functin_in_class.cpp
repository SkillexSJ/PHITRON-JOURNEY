
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    void greet()
    { // normally function er motoi thake eita

        cout << "tor nam " << name << " na?";
    }
};

int main()
{

    Student *rahim = new Student("Rahim", 20, 90);

    Student *karim = new Student("karim", 22, 100);

    *karim = *rahim; // dynamic vabe copy korle data haray na

    delete rahim;

    cout << karim->marks;

    // rahim.greet(); // function call eivabe kore ekta object er

    return 0;
}
