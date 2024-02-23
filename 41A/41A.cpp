#include <iostream>
using namespace std;
int main()
{
    string a, b, temp;
    cin >> a >> b;
    for(int i = b.size()-1; i >= 0; i--) {
        temp += b[i];
    }
    if (temp == a) cout << "YES";
    else cout << "NO";
}