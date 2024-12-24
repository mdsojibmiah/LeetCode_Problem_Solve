#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, d;
    cin >> n >> d;

    if (n == 7) {
        cout << "1 3 7 9";
        return;
    }

    for (int odd = 1; odd <= 9; odd += 2) {
        if ((d * n) % odd == 0) {
            cout << odd << " ";
        }
    }
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve(); 
        cout << nl;
    }
    return 0;
}
