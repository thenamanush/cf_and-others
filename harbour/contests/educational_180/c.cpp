#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a) cin >> x;

    int count = 0;
    int maxval = a[n - 1];

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            int required = maxval - (a[i] + a[j]);
            // We need a[k] > required, so lower_bound gives first a[k] > required
            auto it = upper_bound(a.begin() + j + 1, a.end(), required);
            count += a.end() - it;
        }
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
