#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    vector<int> suf(n + 2, 0), prf(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        prf[i] = prf[i - 1] + abs(a[i]);
    }

    for (int i = n; i > 0; --i)
    {
        if (i < n)
            suf[i] = suf[i + 1] + a[i];
        else
            suf[i] = a[i];
    }

    int mx = suf[1], idx = -1;

    for (int i = 2; i <= n; ++i)
    {
        if (a[i] > 0)
        {
            int sum = prf[i - 1] + suf[i + 1] - a[i];
            if (sum > mx)
            {
                mx = sum;
                idx = i;
            }
        }
    }
    if (idx == -1)
        return void(cout << 0 << endl
                         << endl);

    bool f = 0;
    vector<int> ans;
    for (int i = idx - 1; i > 0; --i)
    {
        if (f)
        {
            a[i] = -a[i];
        }
        if (a[i] > 0)
        {
            ans.push_back(i);
            f ^= 1;
        }
    }
    ans.push_back(idx);
    cout << ans.size() << endl;
    for (auto &it : ans)
        cout << it << ' ';
    cout << endl;
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