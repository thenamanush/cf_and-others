#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n; cin >> n;
    vector<int>a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];

    vector<int> b(n);
    for(int i = 0; i < n; ++i){
        b[i] = 2 * (i + 1) - a[i];
    }

    //for(int i = 0; i < n; ++i) cout << b[i] << ' ';
    //cout << endl;

    ll l = -1, r = -1, tmp = 0;
    ll current = 0, mx = -1e9;
    for(int i = 0; i < n; ++i) {
        current += b[i];

        if(current > mx) {
            mx = current;
            l = tmp;
            r = i;
        }

        if(current < 0) {
            current = 0;
            tmp = i + 1;
        }
    }
    if(mx < 0) {
        ll sum = accumulate(a.begin(), a.end(), 0ll);
        cout << sum << endl;
        return;
    }
    else {
        //cout << l << ' ' << r << endl;
        ll ans = (r + 1 + l + 1) * (r - l + 1);
        for (int i = 0; i < l; ++i) ans += a[i];
        for (int i = r + 1; i < n; ++i) ans += a[i];

        cout << ans << endl;
    }
    
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}