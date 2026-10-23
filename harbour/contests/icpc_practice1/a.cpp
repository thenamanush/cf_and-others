#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    int s = accumulate(a.begin(), a.end(), 0ll);

    if((n & 1) != 1 && (s & 1)) {
        if((k & 1) != 1) return void(cout << -1 << endl);
    }
    map<int, int> mp;
    for(int i = 0; i < n; ++i) {
        mp[a[i] % k]++;
    }
    int cnt = 0;
    for(auto &[x, y] : mp) {
        if(y & 1) cnt++;
    }
    if(cnt > (n & 1)) return void(cout << -1 << endl);
    
    int ans = 0;

    map<int, vector<int>> sme;
    for (int x : a) {
    sme[x % k].push_back(x);
    }

    for (auto &[rem, v] : sme) {
        sort(v.begin(), v.end());
        int m = v.size();

        if (m % 2 == 0) {
        for (int i = 0; i < m; i += 2) {
            ans += (v[i + 1] - v[i]) / k;
            }
        }
        else {
        vector<int> pref(m + 1, 0), suff(m + 2, 0);

        for (int i = 2; i <= m; i += 2) {
            pref[i] = pref[i - 2] +
                      (v[i - 1] - v[i - 2]) / k;
        }

        for (int i = m - 2; i >= 1; i -= 2) {
            suff[i] = suff[i + 2] +
                      (v[i + 1] - v[i]) / k;
        }

        int mn = LLONG_MAX;
        for (int i = 0; i < m; i += 2) {
            mn = min(mn, pref[i] + suff[i + 1]);
        }
        ans += mn;
    }
}
cout << ans << endl;

}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}