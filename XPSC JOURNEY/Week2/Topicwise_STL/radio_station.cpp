
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59786987

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp[ip] = name;
    }

    string line;
    getline(cin, line);

    while (m--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string comand, ip_with_semi;
        ss >> comand >> ip_with_semi;
        string ip = ip_with_semi.substr(0, ip_with_semi.size() - 1);

        string name = mp[ip];

        cout << comand << " " << ip << ";" << "#" << name << endl;
    }

    return 0;
}
