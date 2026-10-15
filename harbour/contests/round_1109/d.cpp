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
    int sum = accumulate(a.begin(), a.end(), 0ll);

    vector<int> c(x);
    for (auto &x : c)
        cin >> x;
    sort(c.begin(), c.end());

    vector<int> ppos(n, 0), pneg(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            ppos[i] = ppos[i - 1];
            pneg[i] = pneg[i - 1];
        }

        if (a[i] > 0)
            ppos[i] += a[i];
        else if (a[i] < 0)
            pneg[i] += -a[i]; // add the absolute value
    }
    // for (auto &it : ppos)
    //     cout << it << " ";
    // cout << endl;
    // for (auto &it : pneg)
    //     cout << it << " ";
    // cout << endl;
    for (int i = x - 1; i >= 0; --i)
    {
        int l;
        if (i > 0)
            l = c[i - 1];
        else
            l = 0;

        int pos = ppos[c[i] - 1] - (l > 0 ? ppos[l - 1] : 0);
        int neg = pneg[c[i] - 1] - (l > 0 ? pneg[l - 1] : 0);

        int ssum = pos - neg;
        int add = abs(ssum) - ssum;
        sum += add;
    }
    cout << sum << endl;
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