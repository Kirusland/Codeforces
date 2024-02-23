#include <iostream>
using namespace std;
void solve() {
    int n, ans = 0; string s1, substr = "B";
    cin >> n >> s1;
    int b1 = s1.find(substr);
    int b2 = s1.rfind(substr);
    cout << b2 - b1 + 1 << "\n";
}
int main()
{
    int counter;
    cin >> counter;
    while (counter--) {
        solve();
    }
}