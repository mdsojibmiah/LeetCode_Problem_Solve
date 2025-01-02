/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 02 / 2025
   Time  : 20:37
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
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
    string S;
    cin >> S;
    
    size_t pos = 0;
    while ((pos = S.find("EGYPT", pos)) != string::npos) {
        S.replace(pos, 5, " ");
        pos += 1;
    }
    
    cout << S << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}