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
    string a, b;
    cin >> a >> b;

    int o = 0, e = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == '1')
        {
            if (i & 1)
                o++;
            else
                e++;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (b[i] == '1')
        {
            if (i & 1)
                o--;
            else
                e--;
        }
    }
    if (o == 0 && e == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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