/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 26 / 2024
   Time  : 00:52
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
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
    getline(cin, S);
    
    for (char &c : S) {
        c = (c == ',') ? ' ' : (islower(c) ? toupper(c) : (isupper(c) ? tolower(c) : c));
    }
    cout << S << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}