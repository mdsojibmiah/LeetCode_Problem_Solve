/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 02:55
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/E
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(int n) {
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ops1 = 0, ops2 = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (a[i] < 0) ops1++;
            if (a[i] > 0) ops2++;
        } else {
            if (a[i] > 0) ops1++;
            if (a[i] < 0) ops2++;
        }
    }

    cout << min(ops1, ops2) << endl;
}

int main() {
    fast_io;
    int n;
    cin >> n;
    solve(n);
    return 0;
}