/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 15 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << (i < n ? " " : "");
    }
    cout << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}