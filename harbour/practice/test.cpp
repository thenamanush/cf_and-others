#include<bits/stdc++.h>
using namespace std;

unordered_map<char, char> pairs = {
    {'0', '0'}, {'1', '1'}, {'6', '9'}, {'8', '8'}, {'9', '6'},
    {'3', 'E'}, {'E', '3'}, {'5', '5'}
};

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;

    for (int i = 0; i <= n / 2; i++) {
        char left = s[i];
        char right = s[n - 1 - i];

        if (pairs[left] != right) {
            ans++;
        }
    }
    
    if (ans >= n / 2) {
        for (int i = 0; i < n; i++) {
            if (pairs.find(s[i]) != pairs.end()) {
                cout << n - 1 << endl;
                return 0;
            }
        }
    } else {
        cout << ans << endl;
    }

    return 0;
}
