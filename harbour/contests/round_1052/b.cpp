#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int M = 1e5 + 7;

int freq[M];

void solve() {
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; ++i) freq[i] = 0;

    vector<set<int>> v(n);
    for(int i = 0; i < n; ++i) {
        int l; cin >> l;
        for(int j = 0; j < l; ++j) {
            int x; cin >> x;
            v[i].insert(x);
            freq[x]++;
        }
    }
    for(int i = 1; i <= m; ++i) {
        if(freq[i] == 0) {
            cout << "NO" << endl;
            return;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        bool f = true;
        for(auto & x: v[i]) {
            if(freq[x] == 1) {
                f = false;
            }
        }
        if(f) cnt++;
    }

    if(cnt > 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();

    return 0;
}