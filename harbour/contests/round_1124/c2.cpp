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

    for (auto &it : a)
        cin >> it;

    int ans = 0;
    bool found = false;

    for (int i = n - k, j = k - 1; i >= 0 && j < n; i--, j++)
    {
        if (j > i)
        {
            found = true;
            ans += max(a[i], a[j]);
        }
    }

    if (!found)
    {
        int s1 = 0, s2 = 0;

        for (int i = 0; i < k; i++)
            s1 += a[i];

        for (int i = n - k; i < n; i++)
            s2 += a[i];

        ans = max(s1, s2);
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