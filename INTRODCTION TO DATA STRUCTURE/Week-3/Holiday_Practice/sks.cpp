
#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int score[5];
    int sum;

    Student()
    {

        sum = 0;
    }

    void input()
    {

        for (int i = 0; i < 5; i++)
        {
            cin >> score[i];
            sum += score[i];
        }
    }

    int count_score()
    {
        return sum;
    }
};

int main()
{
    int n;

    cin >> n;

    Student *s = new Student[n];

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    int kristen = s[0].count_score();

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        int total = s[i].count_score();

        if (total > kristen)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
