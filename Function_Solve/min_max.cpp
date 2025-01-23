/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 23 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void findMinMax(int n) {
    int mn = INT_MAX, mx = INT_MIN, x;
    while (n--) {
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << mn << " " << mx << "\n";
}

void solve() {
    int n;
    cin >> n;
    findMinMax(n);
}

int main() {
    fast_io;
    solve();
    return 0;
}