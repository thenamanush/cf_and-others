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

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    if(mp.size() == 1) {
        cout << 1 << endl;
        return;
    }
    else{
        cout << 2 * mp.size() - 1 << endl;
    }
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}