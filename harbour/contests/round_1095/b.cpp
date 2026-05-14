#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n - 1; ++i) {
        if(gcd(a[i], a[i + 1]) == abs(a[i] - a[i + 1])) {
            ans++;
            
        }
    }
    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}