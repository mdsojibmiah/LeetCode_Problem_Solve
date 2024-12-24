/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 23 / 2024
   Time  : 19:13
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
// #define F first
// #define S second

// const ll INF = 1e18;
// const ll MOD = 1e9 + 7;
// const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    string s;
    getline(cin,s);
    size_t pos = s.find('\\');
    cout << s.substr(0,pos) << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}