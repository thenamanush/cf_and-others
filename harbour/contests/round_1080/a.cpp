#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    bool f = false;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 67) f = true;
    }

    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}