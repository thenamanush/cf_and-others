#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int Try = 0, f = 1;
    for(int i = 0; i + 1 < n; ++i) {
        if(a[i + 1] == (7 - a[i])) {
            Try++, i++;
        }
        else if(a[i] == a[i + 1]) {
            Try++, i++;
        }
    }
    cout << Try << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}