#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            ans = max(ans, a[i] ^ a[j]);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t;
    cin >> t;
    while(t--) solve();
    
    return 0;
}