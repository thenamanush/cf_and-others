#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    
    int ans = 0, cnt = 0;
    bool f = true;
    for(int i = 0; i < n; ++i) {
        if(s[i] == '0') {
            if(f) ans++;
            else{
                cnt--;
            }
        }
        else{
            f = false;
            cnt = k;
        }
        if(cnt == 0) f = true;
    }
    cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}