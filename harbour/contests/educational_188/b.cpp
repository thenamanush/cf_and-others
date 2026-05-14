#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    multiset<int> st;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        st.insert(a[i]);
    }
    int ans = 0;
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == *st.rbegin()) {
            ans++;
            auto it = st.find(*st.rbegin());
            if(it != st.end()) {
                st.erase(it);
            }
        }
        else {
            auto it = st.find(a[i]);
            if(it != st.end()) {
                st.erase(it);
            }
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