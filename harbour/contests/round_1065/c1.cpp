#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    ll total = 0;
    for(int i = 0; i < n; ++i){
        total ^= a[i] ^ b[i];
    }
    if(total == 0) {
        cout << "Tie\n";
        return;
    }
    for(int i = n - 1; i >= 0; --i) {
        if((a[i] == 1 or b[i] == 1) and (a[i] != b[i])) {
            if(i % 2 == 0) {
                cout << "Ajisai" << endl;
                return;
            }
            else{
                cout << "Mai" << endl;
                return;
            }
        }
    }

    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();

    return 0;
}