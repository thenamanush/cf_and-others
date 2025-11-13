#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<pair<ll, ll>> v;

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            ll ind;
            cin >> ind;
            v.push_back({a[ind], ind});
        }
        else
        {
            bool f = true;
            ll find;
            cin >> find;
            sort(v.begin(), v.end());
            ll sz = v.size();
            for (int i = 0; i < min(sz, k); ++i){
                if(v[i].second == find){
                    cout << "YES" << '\n';
                    f = false;
                    break;
                }
            }
            if(f){
                cout << "NO" << '\n';
            }
        }
    }
}
