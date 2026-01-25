#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll> a(2 * n);
    map<ll, int> mp;
    for (int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }

    int even = 0, odd = 0;
    for(auto & it : mp) {
        if(it.second & 1) odd++;
        else even++;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}