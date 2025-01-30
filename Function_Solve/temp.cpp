#include <bits/stdc++.h>
using namespace std;

void swap_rc(vector<vector<int>> &a, int x, int y) {
    swap(a[x - 1], a[y - 1]);
    for (int i = 0; i < a.size(); i++)
        swap(a[i][x - 1], a[i][y - 1]);
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<int>> a(n, vector<int>(n));
    
    for (auto &r : a)
        for (auto &c : r)
            cin >> c;

    swap_rc(a, x, y);

    for (auto &r : a) {
        for (auto &c : r)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}