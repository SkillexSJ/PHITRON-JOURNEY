#include <iostream>
using namespace std;

int main()
{
    int n = 16;
    while (n > 1)
    {
        cout << n << endl;
        n /= 2; // Halving the input
    } // O(log n)

    for (int i = 0; i < n; i *= 2)
    {
        cout << i;
    } // O(log n)

    return 0;
}
