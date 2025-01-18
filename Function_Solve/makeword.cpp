/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 15 / 2025
   Time  : 08:30
   Problem Link: https://example.com/problem
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin >> n;
    string b = bitset<32>(n).to_string();
    b = b.substr(b.find('1'));
    string r = b;
    reverse(r.begin(), r.end());
    cout << ((n % 2 != 0 && b == r) ? "YES\n" : "NO\n");
}

int main() {
    fast_io;
    solve();
    return 0;
}