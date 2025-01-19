/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 15 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << (isPrime(n) ? "YES\n" : "NO\n");
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}