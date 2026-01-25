#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int M = 1e6 + 7;
int freq[M] = {0};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t; cin >> n >> t;
    ll a[n + 1];
    vector<ll> pr(n + 1, 0);
    ll ans = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        ll add = a[i] * (freq[a[i]] + 1 * freq[a[i]] + 1);
        if(freq[a[i]] == 0) {
            ans += add;
            pr[i] = ans;
        }
        else{
            ans += add - (freq[a[i]] - 1) * (freq[a[i]] - 1) * a[i];
            pr[i] = ans;
        }
    }
    while(t--) {
        int l, r; cin >> l >> r;
        cout << pr[r] - pr[l - 1] << endl;
    }
}