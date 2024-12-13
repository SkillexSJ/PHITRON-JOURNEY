
#include <bits/stdc++.h>
using namespace std;

class Honda // class declare korlam
{

public: // accessing point
    char model[100];
    int power;
    double version;

    Honda(const char *m, int p, double v) // eita holo constructor
    {

        strcpy(model, m);
        power = p;
        version = v;
    }
};

Honda func() // eita fnction theke class e jacche
{

    Honda hero("hero", 180, 1.00);

    return hero;
}

Honda *func() // eita kichu return korbe na karon eitar vitor stack memory create hoye ase ja function sesh howar por delete hoye jabe
{

    Honda hero("hero", 180, 1.00);

    Honda *pointer = &hero;

    return pointer;
}

Honda *func() // eita dynamically kora eita haray jabe na
{

    Honda *hero = new Honda("hero", 180, 1.00);

    return hero;
}

int main()
{
    Honda hero("hero", 180, 1.00); // consructor hoile eivabe call korbo

    hero.power = 180;
    hero.version = 1.0;

    char temp[100] = "hero";
    strcpy(hero.model, temp);

    Honda obj = func();

    cout << obj.model << obj.power << obj.version << endl;

    Honda *pointer_nilam_dynamic_theke = func();

    cout << pointer_nilam_dynamic_theke->model << pointer_nilam_dynamic_theke->power << pointer_nilam_dynamic_theke->version << endl; // "->" eita derfrence er arekta keyword

    return 0;
}
