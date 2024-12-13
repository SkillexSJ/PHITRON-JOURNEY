
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int min_num = min({a, b, c}); /// {} ei bracket dite hoy jodi dui er beshi compare korte jai.
    int max_num = max({a, b, c});

    cout << min_num << " " << max_num << endl;

    return 0;
}
