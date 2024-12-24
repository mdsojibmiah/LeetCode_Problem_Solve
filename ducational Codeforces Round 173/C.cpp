#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        // For n >= 7, the answer is all odd digits
        if (n >= 7) {
            cout << "1 3 5 7 9" << endl;
            continue;
        }

        // Compute n!
        long long factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        // Check divisibility for each odd digit
        bool first = true;
        for (int odd = 1; odd <= 9; odd += 2) {
            if ((d * factorial) % odd == 0) {
                if (!first) cout << " ";
                cout << odd;
                first = false;
            }
        }
        cout << endl;
    }

    return 0;
}
