#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    int it = 0;
    for(int i = 1; i <= n; ++i) {
        cout << i << ' ' << 3 * n - it ++ << ' ' << 3 * n - it++ << ' ';
    }
    cout << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}