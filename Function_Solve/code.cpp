/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 16 / 2025
   Time  : 12:20
   Problem Link: https://codeforces.com/problemset/problem/734/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool chk(int y) {
    set<int> d;
    while (y > 0) {
        int x = y % 10;
        if (d.find(x) != d.end()) return false;
        d.insert(x);
        y /= 10;
    }
    return true;
}

void solve() {
    int y;
    cin >> y;
    y++;
    while (!chk(y)) y++;
    cout << y << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}
