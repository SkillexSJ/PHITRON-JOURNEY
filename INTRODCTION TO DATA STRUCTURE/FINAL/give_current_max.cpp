
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

class comp
{
public:
    bool operator()(Student s1, Student s2)
    {

        if (s1.marks < s2.marks)
        {
            return true;
        }
        else if (s1.marks == s2.marks)
        {

            if (s1.roll > s2.roll)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, comp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student s(name, roll, marks);
        pq.push(s);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student s(name, roll, marks);
            pq.push(s);

            if (!pq.empty())
            {
                Student s = pq.top();
                cout << s.name << " " << s.roll << " " << s.marks << endl;
            }
        }

        else if (x == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                Student s = pq.top();
                cout << s.name << " " << s.roll << " " << s.marks << endl;
            }
        }

        else if (x == 2)
        {

            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    Student s = pq.top();
                    cout << s.name << " " << s.roll << " " << s.marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
