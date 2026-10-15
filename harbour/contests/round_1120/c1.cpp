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
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> diff(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        int L = a[i] * i;
        if (L > n - 1)
            continue;
        int R = min(L + i - 1, n - 1);
        diff[L]++;
        diff[R + 1]--;
    }

    vector<int> ans;
    int cur = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        cur += diff[i];
        if (cur == 0)
            ans.push_back(i);
    }

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';
    cout << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();
}