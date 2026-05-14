#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    vector<int> ans(n + 1);
    for(int i = 2; i < n; ++i) {
        ans[i] = ((a[i + 1] - a[i]) - (a[i] - a[i - 1])) / 2;
    }
    ans[n] = a[1];
    for(int i = 1; i < n; ++i) {
        ans[n] -= ans[i] * (i - 1);
    }
    ans[n] /= (n - 1);

    ans[1] = a[n];
    for(int i = 2; i <= n; ++i) {
        ans[1] -= ans[i] * (n - i);
    }
    ans[1] /= (n - 1);

    for(int i = 1; i <= n; ++i) cout << ans[i] << ' ';
    cout << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}