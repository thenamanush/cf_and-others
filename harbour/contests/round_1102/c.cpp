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
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
    {
        int c = a[i], s = c;

        for (int j = i + 1; j % n != i; ++j)
        {
            int idx = (j - 1) % n + 1;

            if (idx == (i == 1 ? n : i - 1))
            {
                s += a[idx];
            }
            else
            {
                s += min(c, a[idx]);
            }
        }

        cout << s << ' ';
    }

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