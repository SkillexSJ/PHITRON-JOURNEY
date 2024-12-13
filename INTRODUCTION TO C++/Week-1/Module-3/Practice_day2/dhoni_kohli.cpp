
#include <bits/stdc++.h>
using namespace std;

class Player
{

public:
    int jersey_number;
    char country[10];
};

int main()
{

    Player *dhoni = new Player;

    dhoni->jersey_number = 7;
    char temp[10] = "India";

    strcpy(dhoni->country, temp);

    Player *kohli = new Player;

    kohli->jersey_number = dhoni->jersey_number;
    strcpy(kohli->country, dhoni->country); // eitaa shothik

    // kohli = dhoni; eivabe kora vul

    delete dhoni;

    cout << kohli->country << " " << kohli->jersey_number;
    return 0;
}
