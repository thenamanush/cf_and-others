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

    vector<int> a(n);

    for (auto &x : a)
        cin >> x;

    int ans = n;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i - 1])
            ans--;
    }

    vector<int> tmp = a;
    sort(tmp.begin(), tmp.end());

    if (tmp[0] == tmp[n - 1])
        return void(cout << 1 << endl);

    if (ans == n || n == 2)
        return void(cout << ans << endl);

    if (n == 3)
    {
        if (ans > 1)
            return void(cout << 3 << endl);
        else
            return void(cout << ans << endl);
    }

    bool f1 = false;
    bool f2 = false;

    for (int i = 0; i + 3 < n; ++i)
    {
        if (a[i] == a[i + 1] &&
            a[i + 2] == a[i + 3] &&
            a[i] != a[i + 3])
        {
            f1 = true;
            break;
        }
    }

    if (f1)
        return void(cout << ans + 2 << endl);

    for (int i = 0; i + 1 < n; ++i)
    {
        if (a[i] != a[i + 1])
            continue;

        int x = a[i];

        bool left = false;

        if (i - 1 >= 0)
        {
            if (a[i - 1] != x)
            {
                left = true;

                if (i - 2 >= 0 && a[i - 2] == x)
                    left = false;
            }
        }

        bool right = false;

        if (i + 2 < n)
        {
            if (a[i + 2] != x)
            {
                right = true;

                if (i + 3 < n && a[i + 3] == x)
                    right = false;
            }
        }

        if (left || right)
        {
            f2 = true;
            break;
        }
    }

    if (f2)
        cout << ans + 1 << endl;
    else
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