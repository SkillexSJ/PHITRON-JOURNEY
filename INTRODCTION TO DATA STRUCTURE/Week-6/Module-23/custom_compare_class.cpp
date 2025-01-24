
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
};

class cmp // ekta compare class banalam
{
public:
    bool operator()(Student l, Student r) // compare function banalam
    {
        if (l.marks > r.marks) // choto theke boro er jnno ulta condition
        {
            return true;
        }

        return false;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq; // ekta student class er object er priority queue
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student s(name, roll, marks); // student class er object banacchi
        pq.push(s);                   // priority queue te push korlam
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}
