/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Problem Link: https://codeforces.com/contest/2044/problem/B
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
int main() {
    fast_io;
    int t;cin >> t;
    while (t--) {
        string s;cin>>s;
        string b = "";
        int n = s.size()-1;
        for(int i=n;i>=0;i--){
            if(s[i]=='q')b+='p';
            else if(s[i]=='p')b+='q';
            else b+='w';
        }
        cout<<b<<endl;
    }
    return 0;
}