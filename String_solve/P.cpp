/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 31 / 2024
   Time  : 21:43
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
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
    getline(cin, s);
    int c = 0;
    bool w = false;
    for (char x : s) {
        if (isalpha(x)) {
            if (!w) {
                c++;
                w = true;
            }
        } else {
            w = false;
        }
    }
    cout << c << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}