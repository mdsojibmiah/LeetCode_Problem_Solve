/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 21:18
   Problem Link: https://codeforces.com/contest/2051/problem/C
*/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    unordered_set<int> known;

    for (int i = 0; i < m; ++i) cin >> a[i];
    for (int i = 0; i < k; ++i) {
        int x;
        cin >> x;
        known.insert(x);
    }

    string result = "";
    for (int i = 0; i < m; ++i) {
        // If Monocarp knows all questions except the excluded one (a[i])
        if (known.size() == n - 1 && known.find(a[i]) == known.end()) {
            result += '1';
        } else {
            result += '0';
        }
    }

    cout << result << '\n';
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
