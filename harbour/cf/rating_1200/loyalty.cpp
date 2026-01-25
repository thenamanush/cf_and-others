#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    cout << "next din theke r faki dibo na" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}