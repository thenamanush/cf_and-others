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

    vector<int> one(n + 1), val(n + 1);

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        one[i] = one[i - 1] + (a[i] == 1);
        cnt += (a[i] == 3);
        val[i] = i - 2 * cnt;
    }

    val[0] = 0;

    int mx = val[n - 1];

    for (int i = n - 2; i >= 1; i--)
    {
        if (2 * one[i] >= i && mx >= val[i])
        {
            cout << "YES" << endl;
            return;
        }
        mx = max(mx, val[i]);
    }

    cout << "NO" << endl;
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