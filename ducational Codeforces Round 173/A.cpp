/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 24 / 2024
   Time  : 20:39
   Problem Link: https://codeforces.com/contest/2043/problem/0
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()

// const ll INF = 1e18;
// const ll MOD = 1e9 + 7;
// const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll solve(ll n) {
    int a = 0;
    while (n > 3)
    {
        n/= 4;
        a++;
    }
    return 1LL << a;
    
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << solve(n) << nl;
    }
    return 0;
}