#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    if(a[0] == 1 or a[n - 1] == 1) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}