#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n; cin >> n;
    vector<ll> a(2 * n);
    map<ll, int> mp;

    for(ll i = 0; i < 2 * n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }

    for(auto &[key, value] : mp) {
        cout << key << ' ' << value << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}