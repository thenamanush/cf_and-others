#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;

    ll range = -1;
    ll ans = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            range = max(range, i + k);
        }
        if (i <= range) continue;
        if (s[i] == '0') ans++;
    }

    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}
