
#include <bits/stdc++.h>
using namespace std;

void inser_heap(vector<int> &v, int val)
{

    v.push_back(val);

    int cur_idx = v.size() - 1;

    while (cur_idx != 0) // emon hote pare ekdom shuru te giye thamse tokhn ei condition na dile abar inifite hoye jabe
    {
        int parent_idx = (cur_idx - 1) / 2; // parent ber korar formula

        if (v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]); // je boro shey age chole jabe
        }
        else
        {
            break; // jkhon dekhbo amar parent ekhon thikhtak ache tokhon amar loop break korbe
        }

        cur_idx = parent_idx; // ekdom parent index update korbe
    }
}

void delete_heap(vector<int> &v)
{

    v[0] = v[v.size() - 1]; // last index ke ekdom shuru te niye ashlam jate complete binary ta thik thake
    v.pop_back();           // tarpor amar target value potashhh

    int cur_idx = 0;

    while (true)
    {
        int left_idx = cur_idx * 2 + 1;  // eita ekta heap tree te node er left child er index
        int right_idx = cur_idx * 2 + 2; // eita ekta heap tree te node er right child er index

        int left_val = INT_MIN, right_val = INT_MIN; // amar left child er value & right child er initial value niye rakhlam

        if (left_idx < v.size() - 1)
        {
            left_val = v[left_idx]; // age dekhte hiobo amr range er vitor ase kina nahle olot palot value dhukay dibo
        }

        if (right_idx < v.size() - 1)
        {
            right_val = v[right_idx]; // age dekhte hiobo amr range er vitor ase kina nahle olot palot value dhukay dibo
        }

        if (left_val >= right_val && left_val > v[cur_idx]) // je kono ek jayay equal == deya lagbe jodi value equal hoy je kono ekdin nibo
        {
            swap(v[cur_idx], v[left_idx]); // dui dike and node theke je boro shey upore jabe
            cur_idx = left_idx;            // and index keo update kore dibo
        }

        else if (right_val >= left_val && right_val > v[cur_idx])
        {

            swap(v[cur_idx], v[right_idx]); // dui dike and node theke je boro shey upore jabe
            cur_idx = right_idx;
        }
        else
            break; // koono condition puron hoy nai
    }
}

void print_heap(vector<int> v)
{

    for (auto num : v)
    {

        cout << num << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        inser_heap(v, val); // ekta fnction call kora holo
    }

    delete_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}
