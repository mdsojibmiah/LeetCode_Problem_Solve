/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 03 / 2025
   Time  : 10:07
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
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
    int n;
    string s;
    cin >> n >> s;

    int sc = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'V') sc += 5;
        else if (s[i] == 'W') sc += 2;
        else if (s[i] == 'X' && i + 1 < n) ++i;
        else if (s[i] == 'Y' && i + 1 < n) s += s[i + 1], ++i;
        else if (s[i] == 'Z' && i + 1 < n) {
            if (s[i + 1] == 'V') sc /= 5, ++i;
            else if (s[i + 1] == 'W') sc /= 2, ++i;
        }
    }
    cout << sc << endl;
}

int main() {
    fast_io;
    solve();
    return 0;
}