#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    map<int, int> fr;

    for (auto &x : a)
    {
        cin >> x;
        fr[x]++;
    }

    vector<int> sz;
    for (auto &[x, y] : fr)
        sz.push_back(y);

    sort(sz.begin(), sz.end());

    int size = sz.size();
    int sum = accumulate(sz.begin(), sz.end(), 0LL);

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        int cur = sum - (sz[i] - 1) * (size - i);

        if (cur <= k)
        {
            if ((k - cur) % (size - i) == 0)
                ans++;
        }

        int j = i;
        while (j + 1 < size && sz[j + 1] == sz[i])
            j++;

        for (int x = i; x <= j; x++)
            sum -= sz[x];

        i = j;
    }

    cout << ans << endl;
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