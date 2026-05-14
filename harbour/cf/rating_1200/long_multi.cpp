#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    string a, b; cin >> a >> b;
    int n = a.size();

    bool f = true;
    for(int i = 0; i < n; ++i) {
        if(a[i] > b[i]) {
            if(f) {
                f = false;
            }
            else{
                swap(a[i], b[i]);
            }
        }
        else if(a[i] == b[i]) continue;
        else{
            if(f) {
                swap(a[i], b[i]);
                f = false;
            }
        }
    }
    cout << a << endl << b << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}