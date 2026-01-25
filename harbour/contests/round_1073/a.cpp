#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<pair<int, char>> v;
    for(int i = 0; i < n; ++i) {
        if(i & 1) v.push_back({a[i], 'R'});
        else v.push_back({a[i], 'B'});
    }

    sort(v.begin(), v.end());

    bool f = true;
    for(int i = 0; i < n - 1; ++i) {
        if(v[i].second == v[i+1].second) {
            f = false;
        }
    }
    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}