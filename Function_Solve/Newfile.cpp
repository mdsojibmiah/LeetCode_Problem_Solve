/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 24 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

double calculateAverage(int n) {
    double sum = 0, x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    return sum / n;
}

void solve() {
    int n;
    cin >> n;
    cout << fixed << setprecision(6) << calculateAverage(n) << "\n";
}

int main() {
    fast_io;
    solve();
    return 0;
}