#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    if(n & 1) {
        cout << n - 1 << ' ';
        for(int i = 1; i <= n / 2; ++i) {
            cout << (2 * i) + 1 << ' ';
            if((2 * i) != (n - 1)) {
                cout << 2 * i << ' ';
            }
        }
        cout << 1 << endl;
    }
    else{
        cout << n << ' ';
        for(int i = 1; i < n / 2; ++i) {
            cout << (2 * i) + 1 << ' ';
            if((2 * i) != (n - 1)) {
                cout << 2 * i << ' ';
            }
        }
        cout << 1 << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}