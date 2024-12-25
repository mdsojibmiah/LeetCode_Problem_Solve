/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 26 / 2024
   Time  : 01:09
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
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

void solve() {
    string s;
    cin >> s;
    if(s.find("010")!=string::npos ||s.find("101")!=string::npos){
        cout << "Good" << nl;
    }else {
        cout << "Bad" << nl;
    }
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