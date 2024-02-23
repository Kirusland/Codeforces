#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int func(string s1) {
    if (s1[1] == 'B') {
        cout << "A" << "\n";
    }
    else {
        if (s1[2] == 'B') {
            cout << "C" << "\n";
        }
        else {
            cout << "B" << "\n";
        }
    }
    return 0;
}
int main()
{
    int count; cin >> count;
    while (count--) {
        string a, b, c;
        cin >> a >> b >> c;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        if (a != "ABC") {
            func(a);
        }
        else if (b != "ABC") {
            func(b);
        }
        else {
            func(c);
        }
    }
}