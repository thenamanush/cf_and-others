#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(m);

    for(int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    if(m == 1 && n > m) return void(cout << -1 << endl);
    // cout << "YES" << endl;
    if(m == 2 && n > 3) return void(cout << -1 << endl);

    for(int i = 0; i < n; ++i) {
        if(i < 2) cout << a[i] << ' ';
        else if(i % 2 == 0) cout << a[1] << ' ';
        else cout << a[2] << ' ';
    }
    cout << endl;
}
int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}