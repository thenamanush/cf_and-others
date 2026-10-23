
#include <bits/stdc++.h>
using namespace std;

#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x % k].push_back(x);
    }

    int cnt = 0, ans = 0;

    for (auto &[rem, v] : mp) {
        sort(v.begin(), v.end());

        int m = v.size();

        if (m % 2 == 0) {
            for (int i = 0; i < m; i += 2) {
                ans += (v[i + 1] - v[i]) / k;
            }
        }
        else {
            cnt++;

            if (cnt > 1 || n % 2 == 0) {
                cout << -1 << endl;
                return;
            }

            // Pair from right, skipping index 0
            int right = 0;
            for (int i = 1; i + 1 < m; i += 2) {
                right += (v[i + 1] - v[i]) / k;
            }

            int left = 0;
            int mn = LLONG_MAX;

            // Try leaving each even index unpaired
            for (int i = 0; i < m; i += 2) {
                mn = min(mn, left + right);

                if (i + 2 < m) {
                    right -= (v[i + 2] - v[i + 1]) / k;
                }

                if (i + 1 < m) {
                    left += (v[i + 1] - v[i]) / k;
                }
            }

            ans += mn;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
