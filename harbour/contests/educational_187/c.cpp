#include <bits/stdc++.h>
using namespace std;
#define justice_for_hadi              \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int s, m;
    cin >> s >> m;
    int ans = -1;
    for (int bit = 63; bit >= 0; bit--) {
        if (m & (1LL << bit)) {
            int val = (1LL << bit);
            if (s >= val) {
                ans = max(ans, s / val);
                s %= val;
            }
        }
    }
    if (s > 0) {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}