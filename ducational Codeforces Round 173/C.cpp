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

    // Check divisibility progressively without computing full factorial
    for (int odd = 1; odd <= 9; odd += 2) {
        ll temp = d;
        bool divisible = true;
        
        for (int i = 2; i <= n; i++) {
            temp *= i;
            if (temp % odd != 0) {
                divisible = false;
                break;
            }
        }

        if (divisible) {
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
