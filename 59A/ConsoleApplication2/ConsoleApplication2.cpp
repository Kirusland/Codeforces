#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string a;
    int big=0, small = 0;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        char b = a[i];
        if (b > 96) {
            small++;
        }
        else {
            big++;
        }
    }
    if (big > small) {
        for (int i = 0; i < a.size(); i++) {
            char b = a[i];
            cout << static_cast<char>(toupper(b));
        }
    }
    else {
        for (int i = 0; i < a.size(); i++) {
            char b = a[i];
            cout << static_cast<char>(tolower(b));
        }
    }
}