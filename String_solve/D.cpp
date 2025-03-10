/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 25 / 2024
   Time  : 10:19
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
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
//     // Your code here
// }

int main() {
    fast_io;
    string A, B;
    cin >> A >> B;
    cout << A.size() << " " << B.size() << nl;
    cout << A << B << nl;
    swap(A[0],B[0]);
    cout << A << " " << B << nl;
    return 0;
}