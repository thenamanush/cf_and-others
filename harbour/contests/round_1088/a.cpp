#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0 ; i < n; ++i) cin >> a[i];
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    for(int i = 0 ; i < n; ++i) cout << 2 << ' ';
    cout << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}