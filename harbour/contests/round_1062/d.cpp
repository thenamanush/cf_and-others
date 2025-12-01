#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());

    for (int i = 2; i < 1e7; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ll gcd = std::gcd(a[j], i);
            if (gcd == 1)
            {
                cout << i << '\n';
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}