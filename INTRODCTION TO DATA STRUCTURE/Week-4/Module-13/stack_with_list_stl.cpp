
#include <bits/stdc++.h>
using namespace std;

// ja ase shob same khali vector er jaygay STL List use korbo
class Mystack
{

public:
    list<int> l;

    void push(int val)
    {

        l.push_back(val);
    }

    void pop()
    {

        l.pop_back(); // karon ami khali last er tai delete korte parmu
    }

    int top()
    {

        return l.back(); // eikhane return korte hobe karon print kora lagbe tai
    }

    int size()
    {

        return l.size();
    }

    bool empty()
    {

        return l.empty(); // stack khali kina check korbe
    }
};

int main()
{

    Mystack st;

    st.push(10);
    st.push(30);
    st.push(20);

    cout << st.size() << endl;

    if (!st.empty()) // jodi single vabe dekhte chai tahole oboshhhoi check kore nite hobe khali kina
    {
        cout << st.top() << endl;
    }

    if (!st.empty()) // jodi single vabe delete korte chai tahole oboshhhoi check kore nite hobe khali kina
    {
        st.pop();
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    cout << st.size() << endl;

    return 0;
}
