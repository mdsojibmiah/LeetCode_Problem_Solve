/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 28 / 2024
   Time  : 22:11
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
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

    int cnt[26] = {0};

    for (char c : s) {
        cnt[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            cout << char('a' + i) << " : " << cnt[i] << endl;
        }
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}