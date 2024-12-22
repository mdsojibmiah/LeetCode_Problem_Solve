/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 21:18
   Problem Link: https://codeforces.com/contest/2051/problem/C
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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m), q(k);
    set<int> s;

    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < k; ++i) {
        cin >> q[i];
        s.insert(q[i]);
    }

    string r = "";
    for (int i = 0; i < m; ++i) {
        bool p = true;
        for (int j = 1; j <= n; ++j) {
            if (j != a[i] && s.find(j) == s.end()) {
                p = false;
                break;
            }
        }
        r += p ? '1' : '0';
    }

    cout << r << nl;
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