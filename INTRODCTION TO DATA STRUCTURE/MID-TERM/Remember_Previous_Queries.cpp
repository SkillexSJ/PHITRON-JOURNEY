#include <iostream>
#include <list>

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    list<int> l;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {

            l.push_front(V);
        }

        else if (X == 1)
        {

            l.push_back(V);
        }

        else if (X == 2)
        {

            if (V >= 0 && V < (int)l.size())
            {
                auto it = l.begin();

                for (int i = 0; i < V; ++i)
                {
                    it++;
                }
                l.erase(it);
            }
        }

        cout << "L ->";
        if (l.empty())
        {
            cout << " ";
        }
        else
        {
            for (auto it = l.begin(); it != l.end(); ++it)
            {
                cout << " " << *it;
            }
        }
        cout << endl;

        cout << "R ->";
        if (l.empty())
        {
            cout << " ";
        }
        else
        {
            for (auto it = l.rbegin(); it != l.rend(); ++it)
            {
                cout << " " << *it;
            }
        }
        cout << endl;
    }

    return 0;
}
