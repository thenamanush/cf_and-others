#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    vector<int> ans;
    int res = 0, lft = 0;
    
    for(int i = 0, j = n - 1; i <= j;) {
        if(a[j] + lft >= x) {
            res += a[j];
            ans.push_back(a[j]);
            lft = (lft + a[j]) % x;
            --j;
        }
        else{
            ans.push_back(a[i]);
            lft += a[i++];
        }
    }

    cout << res << endl;

    for(auto &it : ans) cout << it << ' ';
    cout << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}