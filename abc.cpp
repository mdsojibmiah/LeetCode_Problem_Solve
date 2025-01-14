#include <iostream>
using namespace std;

int main() {
    int n, opinion, isHard = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> opinion;
        if (opinion == 1) {
            isHard = 1;
        }
    }
    cout << (isHard ? "HARD" : "EASY") << endl;
    return 0;
}