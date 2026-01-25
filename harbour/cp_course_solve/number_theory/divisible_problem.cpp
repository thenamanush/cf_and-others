#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; ++i) cin >> a[i];

    bool flag = true;
    for(int i = 1; i <= min(n, 21); ++i) { // pigeonhole kind of...
        bool ok = false;
        for(int j = 1; j <= i; ++j) {
            if(a[i] % (j + 1) != 0) {
                ok = true;
                continue;
            }
        }
        if(!ok) {
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}