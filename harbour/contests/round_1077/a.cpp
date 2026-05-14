#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> a(n);

    int key1, key2;
    if(n & 1) {
        key1 = n / 2 + 1;
        key2 = n / 2;
        for(int i = 0; i < n / 2; ++i) {
        cout << key1++ << ' ' << key2-- << ' ';
    }
    cout << n << endl;
    }
    else{
        key1 = n / 2;
        key2 = n / 2 + 1;
        for(int i = 0; i < n / 2; ++i) {
        cout << key1-- << ' ' << key2++ << ' ';
    }
    }
    cout << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}