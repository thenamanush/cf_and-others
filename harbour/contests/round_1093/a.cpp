#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
#define gcd std::gcd

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    bool f = false;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]] > 1) {
            f = true;
        }
    }
    if(f) {
        cout << -1 << endl;
    } else {
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}