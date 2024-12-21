/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Date  : 12 / 22 / 2024
   Time  : 01:18
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}
