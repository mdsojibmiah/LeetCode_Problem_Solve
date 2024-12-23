#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m), q(k);
    unordered_set<int> s;

    for (int i = 0; i < m; ++i) cin >> a[i];
    for (int i = 0; i < k; ++i) cin >> q[i], s.insert(q[i]);

    string r = "";
    for (int i = 0; i < m; ++i) {
        bool p = true;
        for (int j = 1; j <= n; ++j) {
            if (j != a[i] && s.find(j) == s.end()) {
                p = false;
                break;
            }
        }
        r += p ? '1' : '0';
    }

    cout << r << '\n';
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
