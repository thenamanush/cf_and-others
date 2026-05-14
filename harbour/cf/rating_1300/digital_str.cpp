#include <bits/stdc++.h>
using namespace std;

#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    bool f = true;

    while (f) {
        f = false;
        for (int i = 0; i + 1 < n; ++i) {
            int x = s[i] - '0';
            int y = s[i + 1] - '0';

            if (x < y - 1) {
                s[i] = (y - 1) + '0';
                s[i + 1] = x + '0';
                f = true;
            }
        }
    }

    cout << s << endl;
}

int32_t main() {
    justice_for_hadi

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
