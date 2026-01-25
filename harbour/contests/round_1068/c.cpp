#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    set<int> init;

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        init.insert(a[i]);
    }
    sort(a.begin(), a.end());

    set<int> ans;
    set<int> check;
    for(int i = 0; i < n; ++i) {
        if(check.find(a[i]) == check.end()) {
            ans.insert(a[i]);
            for(int j = a[i]; j <= k; j += a[i]) {
                check.insert(j);
            }
        }
    }
    if(check == init) {
        cout << ans.size() << endl;
        for(auto & it :  ans) cout << it << ' ';
        cout << endl;
        return;
    }
    cout << -1 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}