/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 20:58
   Problem Link: https://codeforces.com/contest/2051/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll tk = a + b + c;
    ll fc = n / tk;
    ll rem = n % tk;
    ll days = fc * 3;

    if (rem > 0) { rem -= a; days++; }
    if (rem > 0) { rem -= b; days++; }
    if (rem > 0) { rem -= c; days++; }
    
    cout << days << nl;
    
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