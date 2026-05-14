#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    multiset<int> st;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        st.insert(x);
    }
    for(auto & it : st) {
        int x = it;
        for(int i = 1; i < 32; ++i) {
            int y = (1ll << i) - 1;
            int need = 0;
            if(y > x) {
                need = y - x;
            }
            if(need == x) {
                if(st.count(need) > 1) {
                    cout << 1 << endl;
                    return;
                }
            } 
            else if(st.count(need)) {
                cout << 1 << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}