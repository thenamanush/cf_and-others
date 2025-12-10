#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    set<int> st;
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        st.insert(a[i]);
    }
    
    for(int i = 0; i < 1e3; ++i) {
        if(st.find(st.size()) == st.end()) {
            st.insert(st.size());
        }
        else{
            cout << st.size() << endl;
            return;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}