#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    int ans = 0;
    bool f = false;

    vector<int> odds;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] & 1) {
            odds.push_back(a[i]);
            f = true;
        }
        else ans += a[i];
    }
    if(!f) cout << 0 << endl;
    else {
        sort(odds.rbegin(), odds.rend());
        int x = odds.size() + 1;
        x /= 2;
        for(int i = 0; i < x; ++i) ans += odds[i];
        cout << ans << endl;
    }


}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}