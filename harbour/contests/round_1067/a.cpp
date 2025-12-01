#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n; cin >> n;
    ll a, b; cin >> a >> b;
    ll res = b + a / 2;
    cout << min(n, res) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
    
    return 0;
}