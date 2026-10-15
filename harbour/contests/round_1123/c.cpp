#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (auto &x : a)
        cin >> x;

    vector<int> pr;
    int y = x;
    for (int p = 2; p * p <= y; p++)
    {
        if (y % p == 0)
        {
            pr.push_back(p);
            while (y % p == 0)
                y /= p;
        }
    }
    if (y > 1)
        pr.push_back(y);

    int ans = 0;
    for (auto &it : pr)
    {
        int s = 0;
        for (int i = 0; i < n; i++)
            if (a[i] % it == 0)
                s += a[i];
        ans = max(ans, s);
    }
    cout << ans << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}