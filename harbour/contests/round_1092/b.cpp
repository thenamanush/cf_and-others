#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n + 1);
    
    for(int i = 1; i <= n; ++i) cin >> a[i];
    int x; cin >> x;

    int val = a[x];
    int l = 0, r = 0;

    for(int i = 1; i < x; ) {
        if(a[i] != val) {
            l++;
            while(i < x && a[i] != val) i++;
        } else {
            i++;
        }
    }

    for(int i = x + 1; i <= n; ) {
        if(a[i] != val) {
            r++;
            while(i <= n && a[i] != val) i++;
        } else {
            i++;
        }
    }

    cout << max(l, r) * 2 << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; 
    while(t--) solve();
    
    return 0;
}