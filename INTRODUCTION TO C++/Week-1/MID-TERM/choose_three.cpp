#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;
        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool found = false;

        sort(A, A + N);

        for (int i = 0; i < N - 2; i++)
        {
            int left = i + 1, right = N - 1;

            while (left < right)
            {
                int current_sum = A[i] + A[left] + A[right];

                if (current_sum == S)
                {
                    found = true;
                    break;
                }
                else if (current_sum < S)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }

            if (found)
                break;
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
