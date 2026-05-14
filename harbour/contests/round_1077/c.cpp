#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> tmp = a;
    sort(tmp.begin(), tmp.end());
    if(tmp == a) {
        cout << -1 << endl;
        return;
    }
        int mx = tmp[n - 1], mn = tmp[0], ans = INT_MAX;
        for(int i = 0; i < n; ++i) {
            if(a[i] != tmp[i]) {
                int res =  max(abs(mx - a[i]), abs(tmp[i] - a[i]));
                int res2 = max(abs(mn - a[i]), abs(tmp[i] - a[i]));
                res = max(res, res2);
                ans = min(ans, res);
            }
        }
        cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
}