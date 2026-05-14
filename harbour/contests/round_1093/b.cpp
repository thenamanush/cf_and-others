#include<bits/stdc++.h>
using namespace std;

#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

void solve() {
    int n, m; 
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int mx = 1, cur = 1;

    for(int i = 1; i < n; ++i) {
        if(a[i] == a[i - 1]) {
            cur++;
        } else {
            cur = 1;
        }
        mx = max(mx, cur);
    }

    if(m - mx <= 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}