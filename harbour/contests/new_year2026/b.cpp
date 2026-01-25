#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k; cin >> n >> k;
    set<int> st;

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        st.insert(x);
    }

    int it = 0;
    for(auto x : st) {
        if(x == it){
            it++;
        }
        else {
            cout << min(k - 1, it) << endl;
            return;
        }
    }
    cout << min(k - 1, it) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}