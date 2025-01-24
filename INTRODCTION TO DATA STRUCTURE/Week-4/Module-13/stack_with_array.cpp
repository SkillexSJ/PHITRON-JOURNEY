
#include <bits/stdc++.h>
using namespace std;

class Mystack
{

public:
    vector<int> v; // jehetu array nicchi tai vector nilam kaj korte shubhida

    void push(int val)
    {

        v.push_back(val);
    }

    void pop()
    {

        v.pop_back(); // karon ami khali last er tai delete korte parmu
    }

    int top()
    {

        return v.back(); // eikhane return korte hobe karon print kora lagbe tai
    }

    int size()
    {

        return v.size();
    }

    bool empty()
    {

        return v.empty(); // stack khali kina check korbe
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
