#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll q; cin >> q;
    while(q--){
        ll x; cin >> x;
        auto it = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << it << '\n';
    }
}