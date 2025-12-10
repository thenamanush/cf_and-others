#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> ar;

    int zero = 0;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x == 0) zero++;
        else ar.push_back(x);
    }

    sort(ar.begin(), ar.end());
    ll supliment = 0;
    for(int i = 0; i < ar.size(); ++i) {
        supliment += ar[i] - 1;
    }
    
    int x = ar.size();
    for(int i = x; i > 0; --i) {
        if(supliment >= zero + i - 1) {
            cout << i << endl;
            return;
        }
    }
}
int main() {
    int t; cin >> t;
    while(t--) solve();
}