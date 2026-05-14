#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, h; cin >> n >> h;
    vector<int> a(n);
    int mx = -1;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int ans = n * (h - mx);
    vector<int> bst;
    for(int i = 0; i < n; ++i) {
        int tot = mx - a[i], h = a[i];
        for(int j = i - 1; j >= 0; --j) {
            h = max(a[j], h);
            tot += (mx - h);
        }
        h = a[i];
        for(int j = i + 1; j < n; ++j) {
            h = max(a[j], h);
            tot += (mx - h);
        }
        bst.push_back(tot);
    }
    sort(bst.begin(), bst.end());
    ans += (bst[n - 1] + bst[n - 2]);
    cout << ans << endl;
    for(auto & it : bst) {
        cout << it << ' ';
    }
    cout << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}