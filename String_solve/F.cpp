/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 25 / 2024
   Time  : 10:40
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
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

// void solve() {

// }

int main() {
    fast_io;
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        int n = S.size();
        if (n>10){
            cout << S[0] << n-2 << S[n-1] << nl;
        }else {
            cout << S << nl;
        }
    }
    return 0;
}