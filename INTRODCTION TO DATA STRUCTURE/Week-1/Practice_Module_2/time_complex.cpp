int k = 1;
while (k <= n)
{
    cout << k << endl;
    k = k * 2;
} // O(log n)

/////

for (int i = 0; i < n; i++) // O(n)

    for (int j = i; j > 0; j--) // O(n)

        cout << i << j; // O(n^2)

/////

for (int i = 0; i < n; i++)         // O(n)
    for (int j = i; j > 0; j--)     // O(n)
        for (int k = j; k > 0; k--) // O(n)
            cout << i << j << k;    // O(n^3)

///////

for (int i = n / 2; i <= n; i++) // O(n)
{
    for (int j = 1; j <= n; j = j * 2) // O(log n)
    {
        cout << i << j << endl; // O(n log n)
    }
}

///////
for (int i = n / 2; i <= n; i++) // O(n)
{
    for (int j = 1; j <= n; j = j + i) // O(n)
    {
        cout << i << j << endl; // // O(n^2)
    }
}
