#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int p, q; cin >> p >> q;
    int maxN = sqrt(p + 2 * q) + 10;

    for(int n = 1; n < maxN; ++n) {
        if((p + 2 * q - n) % (2 * n + 1)) continue;
        int m = (p + 2 * q - n) / (2 * n + 1);

        if(n > m) continue;
        int L = n * (n + 1) + (m - n) * n;
        if(q <= L) {
            cout << n << ' ' << m << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}