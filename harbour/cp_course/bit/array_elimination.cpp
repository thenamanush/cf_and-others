#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    int a[n];
    int cnt[30] = {0};
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        for(int j = 0; j < 30; ++j) {
            if((a[i] >> j) & 1) cnt[j]++;
        }
    }
    for(int k = 1; k <= n; ++k) {
        bool ok = true;
        for(int j = 0; j < 30; ++j) {
            if(cnt[j] % k != 0) {
                ok = false;
                break;
            }
        }
        if(ok) cout << k << ' ';
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
}