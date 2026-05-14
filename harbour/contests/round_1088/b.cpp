#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int MOD = 676767677;

int div(int x) {
    if (x == 0) return 1;
    
    int cnt = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            cnt++;
            if (i * i != x) cnt++;
        }
    }
    return cnt;
}

void solve() {
    int x, y; cin >> x >> y;
    int dif = abs(x - y);

    int ans = div(dif) % MOD;
    cout << ans << endl;

    for(int i = 0; i < x; ++i) cout << 1 << ' ';
    for(int i = 0; i < y; ++i) cout << -1 << ' ';
    cout << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}