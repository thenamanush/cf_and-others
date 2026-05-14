#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    int ans = 0, lst = 0, ok = 0;
    map<int, int> mp;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(mp[a[i] - 1] == 1 && a[i] >= ok) {
            mp[a[i]] = 1;
            lst = a[i];
            continue;
        }
        else{
            //cout << lst << " " << a[i] << endl;
            ans++;
            ok = a[i];
            mp[a[i]] = 1;
            mp[lst] = 0;
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