#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m;
vector<ll> l, r;

ll q;
vector<int> ind;

bool check(ll x)
{
    vector<int> ar(n + 1, 0);
    vector<int> prefix(n + 1, 0);

    for (int i = 0; i < x; ++i)
    {
        ar[ind[i]] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        prefix[i] = prefix[i - 1] + ar[i];
    }

    for (int i = 1; i <= m; ++i)
    {
        ll ones = prefix[r[i]] - prefix[l[i] - 1];
        if (ones > (r[i] - l[i] + 1) / 2)
            return true;
    }
    return false;
}

void solve()
{
    cin >> n >> m;
    l.resize(m + 1), r.resize(m + 1);
    // for left and right
    for (int i = 1; i <= m; ++i)
    {
        cin >> l[i] >> r[i];
    }

    cin >> q;
    ind.resize(q);

    for (int i = 0; i < q; ++i)
    {
        cin >> ind[i];
    }

    ll lo = 1, hi = q, ans = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        if (check(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
        solve();
}