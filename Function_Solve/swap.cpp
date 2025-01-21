/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 15 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void swapNumbers(int &x, int &y) {
    swap(x, y);
}

void solve() {
    int x, y;
    cin >> x >> y;
    swapNumbers(x, y);
    cout << x << " " << y << '\n';
}

int main() {
    fast_io;
    solve();
    return 0;
}