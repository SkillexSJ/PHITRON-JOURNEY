#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << i << ", " << j << ")" << endl; // Pairwise comparison
        }
    }

    // O(n^2) abar O(n^3) o hote pare eita
    return 0;
}
