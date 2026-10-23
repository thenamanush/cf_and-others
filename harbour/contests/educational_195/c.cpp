#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n + 1), pfs(n + 2, 0);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pfs[i] = pfs[i - 1] + a[i];
    }

    vector<int> cnt(k, 0);
    int ans = 0;
    for(int j = k + 1; j <= n; ++j) {
        cnt[pfs[j - k - 1] % k]++;   
        ans += cnt[pfs[j] % k];      
    }
    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}