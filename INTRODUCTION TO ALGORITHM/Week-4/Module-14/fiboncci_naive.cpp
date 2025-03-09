
#include <bits/stdc++.h>
using namespace std;

// eitar TC holo = O(2^n) jeita kharap
int fibo(int n)
{

    if (n < 2)
        return n;

    return fibo(n - 1) + fibo(n - 2); // ager duita value er jogfol
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n);
    return 0;
}
