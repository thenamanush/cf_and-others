#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), freq(1001, 0);
    
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<int> result;
    for(int i = 1000; i >= 0; --i) {
        if(freq[i] > 0) {
            result.push_back(i);
        }
    } 
    int x = result.size(), carry = 0;
    for(int i = 0; i < x; ++i) {
        if(result[i] & 1) carry++;
    }
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--) solve();
}