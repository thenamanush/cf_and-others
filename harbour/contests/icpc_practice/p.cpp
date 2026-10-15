#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

struct edge
{
    int val, i, j;
};

void solve()
{
    int n;
    cin >> n;
    vector<edge> v;

    for (int i = 2; i <= 2 * n; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            int x;
            cin >> x;
            v.push_back({x, i, j});
        }
    }

    sort(v.begin(), v.end(), [](edge &a, edge &b)
         { return a.val > b.val; });

    vector<int> ans(2 * n + 1, 0);
    for (auto &it : v)
    {
        if (ans[it.i] == 0 and ans[it.j] == 0)
        {
            ans[it.i] = it.j;
            ans[it.j] = it.i;
        }
    }

    for (int i = 1; i <= 2 * n; ++i)
        cout << ans[i] << ' ';
    cout << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();

    return 0;
}