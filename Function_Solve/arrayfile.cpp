/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 27 / 2025
   Time  : 08:30 PM
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
}

int main() {
    fast_io;
    solve();
    return 0;
}