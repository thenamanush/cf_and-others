#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + b[i - 1];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x = a[i];

        int ok = n - i;

        int l = 0, r = n, mx = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (pref[mid] <= ok) {
                mx = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        ans = max(ans, x * mx);
    }

    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}