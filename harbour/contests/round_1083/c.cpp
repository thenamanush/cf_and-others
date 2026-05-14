#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    set<vector<int>> st;

    while(n--) {
        vector<int> tmp, fin;
        set<int> chk;
        int l; cin >> l;
        while(l--) {
            int x; cin >> x;
            tmp.push_back(x);
        }
        for(int i = tmp.size() - 1; i >= 0; i--) {
            if(!chk.count(tmp[i])) {
                fin.push_back(tmp[i]);
                chk.insert(tmp[i]);
            }
        }
        chk.clear();
        st.insert(fin);
    }
    vector<int> ans;
    while(!st.empty()) {
        vector<int> it  = *st.begin();
        for(auto & x: it) {
            ans.push_back(x);
        }
        set<int> chk(it.begin(), it.end());
        auto tmp = st;
        st.clear();
        for(auto &v: tmp) {
            vector<int> nw;
            for(auto &x : v) {
                if(!chk.count(x)) {
                    nw.push_back(x);
                }
            }
            if(!nw.empty()) {
                st.insert(nw);
            }
        }
        chk.clear();
        tmp.clear();
    }
    for(auto & x: ans) {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}