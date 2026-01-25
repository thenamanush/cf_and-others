#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    
    for(int i = 0; i < n; ++i) cin >> a[i];
    vector<ll> even, odd;
    sort(a.begin(), a.end(), greater<ll>());

    for(ll i = 0; i < n; ++i) {
        if(a[i] & 1) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }

    vector<ll> even_prefix, odd_prefix;
    for(int i = 0; i < even.size(); ++i) {
        if(i > 0) even_prefix[i] = even_prefix[i - 1] + even[i];
        else even_prefix[i] = even[i];
    }
    for(int i = 0; i < odd.size(); ++i) {
        if(i > 0) odd_prefix[i] = odd_prefix[i - 1] + odd[i];
        else odd_prefix[i] = odd[i];
    }

    for(int i = 0; i < n; ++i) {
        int odd_sz = odd.size(), evn_sz = even.size();
        int rest = i - 1;
        if(rest >= 0) {
            if(rest < evn_sz) {
                cout << odd[0] + even_prefix[rest];
            }
            else{
                
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; while(t--) solve();
}