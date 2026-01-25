#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const ll N = 1e5 + 7;
ll a[N];

ll sp(ll x) {
    ll mn = INT_MAX;
    for(ll i = 3; i * i <= x; ++i) {
        if(x % i == 0) {
            mn = min(mn, i);
            while(x % i == 0) x /= i;
        }
    }
    if(x > 1) mn = min(x, mn);
    return mn;
}

void solve() {
    ll n, k; cin >> n >> k;
    ll mx_odd = 0;
    for(ll i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] & 1) mx_odd = max(a[i], mx_odd);
    }

    if(k & 1) {
        for(ll i = 0; i < n; ++i) {
            if(a[i] & 1) cout << a[i] + k << ' ';
            else cout << a[i] << ' ';
        }
        cout << endl;
        return;
    }
    ll key = sp(mx_odd);
    for(ll i = 0; i < n; ++i) {
        if(a[i] % key == 0) cout << a[i] << ' ';
        else {
            for(ll s = a[i]; ; s += k) {
                if(s % key == 0) {
                    cout << s << ' ';
                    break;
                }
            }
        }
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t; while(t--) solve();
}