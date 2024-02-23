#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = n; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (int i = n - 1; i > 0; i -= 2) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
