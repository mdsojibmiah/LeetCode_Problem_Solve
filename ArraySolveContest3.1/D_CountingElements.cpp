/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 01:56
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]+1==v[j]) {
                count++;
                break;
            }
        }
    }
    cout<<count<<nl;
}

int main() {
    fast_io;
    int n;cin>>n;
    solve(n);
    return 0;
}