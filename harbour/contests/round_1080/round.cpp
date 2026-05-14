#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> ans;

    int cnt = 1;
    while(n > 0) {
        int x = n % 10;
        if(x != 0) {
            ans.push_back(x * cnt);
        }
        n /= 10;
        cnt *= 10;
    }
    cout << ans.size() << endl;
    for(auto &it : ans) cout << it << ' ';
    cout << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}