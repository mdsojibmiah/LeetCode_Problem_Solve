/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Problem Link: https://codeforces.com/problemset/problem/263/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second

// const ll INF = 1e18;
// const ll MOD = 1e9 + 7;
// const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_io;
    int m[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                cout << abs(i - 2) + abs(j - 2) << endl;
                return 0;
            }
        }
    }
    return 0;
}