#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, l, r; cin >> n >> l >> r;
    vector<int> a(n);
    
    for(int i = 0; i < n; ++i) cin >> a[i];
    int i = 0, j = 0, cur = 0, ans = 0;
    
    while(i < n) {
        while(j < n and cur < l) {
            cur += a[j++];
        }
        if(cur <= r and cur >= l) {
            ans++;
            i = j;
            cur = 0;
        }
        else{
            cur -= a[i++];
        }
    }
    cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}