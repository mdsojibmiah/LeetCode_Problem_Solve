/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P24
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define cnl cout<<endl
#define nl "\n"
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x; // Input the array

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
        for (int x : a) cout << x << " "; // Print after each pass
        cnl; // New line after each pass
    }
}
int main() {
    fast_io;
    solve();
    return 0;
}