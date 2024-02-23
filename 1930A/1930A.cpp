﻿#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int score = 0;
        for (int i = 1; i < 2 * n; i += 2) {
            score += a[i];
        }
        cout << score << endl;
    }
    return 0;
}
