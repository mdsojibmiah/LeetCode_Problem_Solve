/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 01:01
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define nl '\n';
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int a, b;
    cin >> a >> b;
    cout << ((a == b) ? "Square" : "Rectangle") << nl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
