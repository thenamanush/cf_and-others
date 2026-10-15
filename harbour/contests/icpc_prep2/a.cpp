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

    vector<int> ans;
    ans.push_back(n);

    while ((n & (n - 1)) != 0)
    {
        int lowbit = n & -n;
        n -= lowbit;
        ans.push_back(n);
    }

    while (n > 1)
    {
        n /= 2;
        ans.push_back(n);
    }

    cout << ans.size() << '\n';

    for (int x : ans)
        cout << x << ' ';

    cout << '\n';
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