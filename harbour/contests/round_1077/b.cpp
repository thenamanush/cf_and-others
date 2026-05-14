#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if(n == 1) {
        cout << n << endl;
        return;
    }

    if(s[0] == '0') s[1] = '1';
    if(s[n-1] == '0') s[n - 2] = '1';
    int ans = 0, rin = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '0') rin++;
        else {
            ans++;
            rin = 0;
        }
        if(rin > 2) {
            ans++;
            rin = 0;
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