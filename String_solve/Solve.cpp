/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 01 / 2025
   Time  : 22:15
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
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
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    unordered_map<char, int> f;
    for (char c : s) if (c == 'E' || c == 'G' || c == 'Y' || c == 'P' || c == 'T') f[c]++;
    cout << min({f['E'], f['G'], f['Y'], f['P'], f['T']}) << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}