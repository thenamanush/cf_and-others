#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, h, r; cin >> n >> h >> r;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];

    int sum = accumulate(a.begin(), a.end(), 0ll);

    if(h % sum == 0) {
        cout << ((h / sum) - 1) * r + (h / sum) * n << endl;
        return;
    }

    int reload = (h / sum);
    int ans = reload * r;
    ans += reload * n;

    h -= reload * sum;

    vector<int> pfs(n), min_pref(n), max_suf(n);

    pfs[0] = a[0];
    for(int i = 1; i < n; i++)
        pfs[i] = pfs[i-1] + a[i];

    min_pref[0] = a[0];
    for(int i = 1; i < n; i++)
        min_pref[i] = min(min_pref[i-1], a[i]);

    max_suf[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--)
        max_suf[i] = max(max_suf[i+1], a[i]);

    int add = -1;

    for(int i = 0; i < n; i++) {
        if(pfs[i] >= h) { // alrdy done
            add = i + 1;
            break;
        }
        if(i < n - 1) { // done after swap
            int new_sum = pfs[i] - min_pref[i] + max_suf[i + 1];
            if(new_sum >= h) {
                add = i + 1;
                 break;
            }
        }
    }
    ans += add;

    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}