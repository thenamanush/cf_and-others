#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    set<int> st;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i] - i);
    }

    int ans = 0, len = 0, prev = -1;

    for (auto x : st) {
    if(len > 0 && x == prev + 1) len++;
    else len = 1;
    ans = max(ans, len);
    prev = x;
    }

    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}