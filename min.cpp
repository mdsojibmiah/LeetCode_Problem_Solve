/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 06 / 2025
   Time  : 12:01
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
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

void solve() {
    int N, K;
    cin >> N >> K;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) cin >> nums[i];

    for (int i = 0; i <= N - K; i++) {
        cout << *min_element(nums.begin() + i, nums.begin() + i + K) << " ";
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}
