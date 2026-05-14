#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int p, q; cin >> p >> q;
    if(p >= q) return void(cout << "Alice" <<endl);
    int d = q - p;
    if(p >= 2*d and q >= 3*d) {
        cout << "Bob" << endl;
    }
    else{
        cout << "Alice" << endl;
    }
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}