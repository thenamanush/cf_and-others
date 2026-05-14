#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n, q; 
    cin >> n >> q;

    vector<int> a(n + 1);
    map<int,int> freq;
    int ans = 0;

    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        if(freq[a[i]] == 0) ans++;
        freq[a[i]]++;
    }

    while(q--) {
        int x; 
        cin >> x;

        if(x == 1) {
            int p, v; 
            cin >> p >> v;

            freq[a[p]]--;
            if(freq[a[p]] == 0) ans--;

            if(freq[v] == 0) ans++;
            freq[v]++;

            a[p] = v;
        }
        else {
            if(freq[0] > 0) cout << ans - 1 << endl;
            else cout << ans << endl;
        }
    }
}

int32_t main() {
    justice_for_hadi
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
