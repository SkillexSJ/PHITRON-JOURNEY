
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello";
    str.append(" World!"); // eita concate er kaj kore
    cout << str << endl;

    str.push_back('!'); // pichone ekta ! jukto kore dibe

    str.insert(5, ","); // 5 num index e ekta , add kore dibe

    str.erase(5, 2); // 5 num index theke 2 ta char remove kore dibe

    str.replace(7, 5, "C++"); // 7 num index e giye 5 ta word remove kore C++ lekha ta add kore dibe

    str.clear(); // string khali kore dibe

    string str2 = "World!";
    str.swap(str2); // swapping er kaj

    str.pop_back(); // shobar sesh index theke ekta word remove

    str.assign("Hello, World!"); // kichuta string declare korar motoi

    str.replace(0, 5, "Goodbye"); // 0 index e  giye 5ta word remove kore Goodbye dhukay dibe

    return 0;
}
