/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 02:42
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
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
    deque<int> a;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    while (!a.empty()) {
        cout << a.front() << " ";
        a.pop_front();

        if (!a.empty()) {
            cout << a.back() << " ";
            a.pop_back();
        }
    }

    cout << endl;


}

int main() {
    fast_io;
    int n;
    cin >> n;
    solve(n);
    
    return 0;
}