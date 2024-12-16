/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Problem Link: https://codeforces.com/contest/2044/problem/Cs
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_io;
    int t;cin >> t;
    while (t--) {
        ll m,a,b,c;cin >> m >> a >> b >> c;
        ll r1 = min(a,m);
        ll r2 = min(b,m);
        ll seat = 2*m-r1-r2;
        ll p = min(c,seat);
        cout<< (r1+r2+p) << endl;
    }
    return 0;
}