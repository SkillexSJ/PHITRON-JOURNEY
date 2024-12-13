#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 36;

    for (int i = 1; i * i <= n; i++)
    {
        cout << i;
    }

    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << i;
    }

    // duia eki O(sqrt(n))

    return 0;
}
