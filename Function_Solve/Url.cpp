/* Author: CodeWithError */
#include <bits/stdc++.h>
using namespace std;

void extract_params(string s) {
    int pos = s.find('?');
    s = s.substr(pos + 1);

    stringstream ss(s);
    string token;
    while (getline(ss, token, '&')) {
        int eq = token.find('=');
        cout << token.substr(0, eq) << ": " << token.substr(eq + 1) << endl;
    }
}

int main() {
    string s;
    cin >> s;
    extract_params(s);
    return 0;
}