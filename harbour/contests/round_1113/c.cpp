#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

int ans(vector<int> &a)
{
    if (a.empty())
        return 0;

    unordered_map<int, int> first, last;

    for (int i = 0; i < (int)a.size(); i++)
    {
        if (!first.count(a[i]))
            first[a[i]] = i;
        last[a[i]] = i;
    }

    int bestL = 0, bestR = 0, mx = -1;

    for (int i = 0; i < (int)a.size(); i++)
    {
        if (first[a[i]] != i)
            continue;

        int l = first[a[i]];
        int r = last[a[i]];
        int len = r - l + 1;

        if (len > mx)
        {
            mx = len;
            bestL = l;
            bestR = r;
        }
    }

    vector<int> nxt;

    for (int i = 0; i < bestL; i++)
        nxt.push_back(a[i]);

    for (int i = bestR + 1; i < (int)a.size(); i++)
        nxt.push_back(a[i]);

    return 1LL * mx * mx + ans(nxt);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(2 * n);

    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];

    cout << ans(a) << '\n';
}

int32_t main()
{
    alliswell

        int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}