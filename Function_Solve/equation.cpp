/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 22 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int calculateSum(int x, int n) {
    int s = power(x, 0) - 1; // Start with (X^0 - 1)
    for (int i = 2; i <= n; i += 2) {
        s += power(x, i);
    }
    return s;
}

void solve() {
    int x, n;
    cin >> x >> n;
    cout << calculateSum(x, n) << '\n';
}

int main() {
    fast_io;
    solve();
    return 0;
}