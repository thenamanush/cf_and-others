#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll sum = accumulate(a.begin() + n / 2, a.end(), 0ll);

    ll l = 1, r = 2e9, ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll need = 0;
        for (int i = n / 2; i < n && a[i] < mid; ++i)
            need += mid - a[i];
        if (need <= k)
            ans = mid, l = mid + 1;
        else
            r = mid - 1;
    }
    cout << ans << '\n';
}