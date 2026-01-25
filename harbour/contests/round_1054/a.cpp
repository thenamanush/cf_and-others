#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    int zero = 0, neg = 0, pos = 0;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] < 0) ++neg;
        else if(a[i] == 0) ++zero;
        else ++pos;
    }

    int ans = zero;
    if(neg & 1) ans += 2;
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}