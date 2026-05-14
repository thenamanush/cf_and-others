#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n, rk, ck, rd, cd; cin >> n >> rk >> ck >> rd >> cd;

    int ans = 0;
    if(rk < rd) ans = max(rd, ans);
    else if(rk > rd)ans = max(n - rd, ans);
    if(ck < cd) ans = max(cd, ans);
    else if(ck > cd)ans = max(n - cd, ans);

    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}