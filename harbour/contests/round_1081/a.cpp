#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int ans = 1;
    bool f = false;
    for(int i = 0; i + 1 < n; ++i) {
        if(s[i] != s[i + 1]) ans++;
        else f = true;
    }
    if(f and (s[0] != s[n - 1])) {
        cout << ans + 1 << endl;
    }
    else{
        cout << ans << endl;
    }
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}