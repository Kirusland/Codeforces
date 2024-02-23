#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int counter; cin >> counter;
    while (counter--) {
        int count; cin >> count;
        long long sum = 0;
        for (int i = 0; i < count; i++) {
            long long num;
            cin >> num;
            sum += num;
        }
        long long side = sqrt(sum);
        if (side * side == sum) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}
