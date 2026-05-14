#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int t, h, u; cin >> t >> h >> u;
    int ans = 0;
    
    ans += 3 * u + min(t, u);
    t -= min(t, u);

    ans += 3 * h + 2 * min(t, 2 * h);
    t -= min(t, 2 * h);

    if(t > 0) ans += (2 * t) + 1;

    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}