#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n <= 2) {
        cout << "-1\n";
        return;
    }

    ll wlth = accumulate(a.begin(), a.end(), 0LL);
    ld avg = static_cast<ld>(wlth) / n;
    ld half = avg / 2;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < half) {
            cnt++;
        }
    }

    if (cnt > n / 2) {
        cout << "0\n";
        return;
    }

    int max_wealth = *max_element(a.begin(), a.end());
    int ans = 0;

    while (true) {
        ans++;
        ll new_wlth = wlth + ans;
        ld new_avg = static_cast<ld>(new_wlth) / n;
        ld new_half = new_avg / 2;

        int new_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < new_half) {
                new_cnt++;
            }
        }

        if (new_cnt > n / 2) {
            cout << ans << "\n";
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
