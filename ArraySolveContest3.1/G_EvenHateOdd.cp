/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 02:50
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
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
    int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            if (num % 2 == 0) even_count++;
            else odd_count++;
        }
        
        if (even_count == odd_count) {
            cout << 0 << endl;
        } else if ((even_count + odd_count) % 2 == 0) {
            cout << abs(even_count - odd_count) / 2 << endl;
        } else {
            cout << -1 << endl;
        }
    
}

int main() {
    fast_io;
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}