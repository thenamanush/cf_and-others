#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n), pfs(n, 0);
    set<int> st;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 0) {
            ans++;
            st.clear();
            continue;
        }
        else{
            if(i < 1) {
                pfs[i] = a[i];
            }
            else{
                pfs[i] = pfs[i - 1] + a[i];
            }
        }
        if(pfs[i] == 0 or (st.find(pfs[i]) != st.end())) {
            ans++;
            st.clear();
        }
        else{
            st.insert(pfs[i]);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}