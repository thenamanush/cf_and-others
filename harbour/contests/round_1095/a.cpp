#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd
const int MOD = 676767677;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] > 1) mp[a[i]]++;
    }
    int ans = 0;
    for(auto &it : mp) {
        ans += ((it.first * it.second) % MOD);
    }
    if(a[n - 1] == 1) {
        ans++;
    }
    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}