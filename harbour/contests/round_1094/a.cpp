#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    bool f = false;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 100) f = true;
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}