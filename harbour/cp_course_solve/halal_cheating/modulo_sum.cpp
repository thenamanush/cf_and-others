#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int n, m;

void solve() {
    cin >> n >> m;
    int a[n];

    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    
    int prefix[n];
    for(int i = 0; i < n; ++i) {
        if(i > 0) prefix[i] = prefix[i - 1] + a[i];
        else prefix[i] = a[i];
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; while(t--) solve();
    solve();
}