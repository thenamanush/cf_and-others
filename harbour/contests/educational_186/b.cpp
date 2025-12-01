#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    
    ll sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());
    ll r = n;
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == 0) {
            r = i;
            break;
        }
    }
    for(int i = r; i >= 0; -- i) {
        if(sum >= r + n - 1){
            cout << r << endl;
            return;
        }
        r--;
    }
    cout <<r << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; while(t--) solve();
}