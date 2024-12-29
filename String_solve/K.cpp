/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 29 / 2024
   Time  : 20:58
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    string s, t, r = "";
    cin >> s >> t;

    int i = 0, j = 0;

    while (i < s.size() && j < t.size()) {
        r += s[i++];
        r += t[j++];
    }

    while (i < s.size()) r += s[i++];

    while (j < t.size()) r += t[j++];

    cout << r << endl;
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