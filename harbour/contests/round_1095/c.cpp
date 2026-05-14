#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    set<int> st;
    multiset<int> lft;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < n && !st.count(a[i])) {
            st.insert(a[i]);
        } else {
            lft.insert(a[i]);
        }
    }

    int ans = 0, i = 0;
    while(true) {
        if(st.count(i)) {
            ans++;
            i++;
            continue;
        }

        auto it = lft.upper_bound(2 * i);
        if(it == lft.end()) break;

        st.insert(i);
        lft.erase(it);
        ans++, i++;
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
}