/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 24 / 2024
   Time  : 20:54
   Problem Link: https://codeforces.com/contest/2043/problem/B
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

ll fact(int n){
    ll res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    return res;
    
}
void solve() {
    int n, d;
        cin >> n >> d;
        ll nfact = fact(n);
        for (int odd=1; odd<=9; odd+=2){
            if ((d * nfact) % odd == 0){
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