#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, m, d; cin >> n >> m  >> d;
    int div = (d / m) + 1;

    if(n % div == 0) cout << n / div << endl;
    else cout << (n / div) + 1 << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}