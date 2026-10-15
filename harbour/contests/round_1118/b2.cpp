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

    vector<int> a(n);
    vector<int> freq(m + 2);
    vector<int> ge(m + 3);
    vector<int> pfs(m + 2);

    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        freq[a[i]]++;
        sum += a[i];
    }

    for (int i = m; i >= 1; --i)
        ge[i] = ge[i + 1] + freq[i];

    for (int i = 1; i <= m; ++i)
    {
        for (int j = i; j <= m; j += i)
        {
            pfs[i] += ge[j];
        }
    }

    vector<int> ans(m + 1);

    int K = 0;
    int pw = 1;

    while (pw < m)
    {
        pw *= 2;
        K++;
    }

    for (int k = 1; k <= K; ++k)
    {
        int C = (1LL << k);
        int cur = 0;

        for (int x = 1; x <= m; ++x)
        {
            int val;

            if (C - 1 > m / x)
            {
                val = pfs[x];
            }
            else
            {
                val = 0;

                int limit = min(C - 1, m / x);

                for (int j = 1; j <= limit; ++j)
                {
                    val += ge[j * x];
                }
            }

            if (C * x <= m)
                val += freq[C * x];

            cur = max(cur, val);
        }

        ans[k] = cur;
    }

    for (int k = K + 1; k <= m; ++k)
        ans[k] = sum;

    for (int k = 1; k <= m; ++k)
        cout << ans[k] << ' ';

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