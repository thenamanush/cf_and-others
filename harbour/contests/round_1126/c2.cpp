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

    int m = 1;
    while (m <= n)
        m <<= 1;

    vector<int> ans;
    ans.push_back(0);
    for (int i = 1; i < m; ++i)
    {
        ans.push_back(i & -i);
        ans.push_back(0);
    }

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
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