/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(ll a,ll b,ll k) {
    if(a%k==0 && b%k==0)cout<<"Both";
    else if(a%k==0)cout<<"Memo";
    else if(b%k==0)cout<<"Momo";
    else cout<<"No One";
}

int main() {
    fast_io;
    ll a,b,k;cin>>a>>b>>k;
    solve(a,b,k);
    return 0;
}