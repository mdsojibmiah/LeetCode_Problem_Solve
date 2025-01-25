/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 15 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void shiftArray(vector<int> &a, int n, int x) {
    x %= n; // Reduce unnecessary rotations
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + x);
    reverse(a.begin() + x, a.end());
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    shiftArray(a, n, x);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

int main() {
    fast_io;
    solve();
    return 0;
}