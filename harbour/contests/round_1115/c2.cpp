#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> d(n);
    for (auto &x : d)
        cin >> x;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int ans = m;

    multiset<int, greater<int>> st;

    for (int i = n - 1; i >= 0; i--)
    {
        for (auto x : a[i])
            st.insert(x);

        // int mn = *min_element(d.begin(), d.begin() + i + 1);
        int sum = 0, cnt = 0;

        for (auto x : st)
        {
            sum += x;
            cnt++;
            if (sum >= d[i] && cnt < ans)
            {
                ans = min(ans, cnt);
                break;
            }
            else if (cnt >= ans)
            {
                break;
            }
        }
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