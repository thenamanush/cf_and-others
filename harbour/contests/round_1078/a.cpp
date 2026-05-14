#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, m; cin >> n >> m;
    int nn = n;
    int cnt = 0;
    if(n > (m - 1)) {
        cnt++;
        n -= (m - 1);
    }
    if(n > (m - 1)) {
        cnt++;
        n -= (m - 1);
    }
    if(n % m == 0) {
        cnt += (n / m) - 1;
    }
    else{
        cnt += (n / m);
    }
    cout << max(0ll,nn - cnt) << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
}