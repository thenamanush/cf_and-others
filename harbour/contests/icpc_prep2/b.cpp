#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int a, x, y;
    cin >> a >> x >> y;

    if (y == 0 || y % a == 0)
    {
        cout << -1 << endl;
        return;
    }

    int row = y / a + 1;

    int st;

    if (row == 1)
    {
        st = 1;
    }
    else if (row % 2 == 0)
    {
        st = 3 * (row / 2) - 1;
    }
    else
    {
        st = 3 * (row / 2);
    }

        if (row == 1 || row % 2 == 0)
    {
        if (2 * x <= -a || 2 * x >= a)
        {
            cout << -1 << endl;
            return;
        }
        cout << st << endl;
    }

    else
    {
        if (x == 0 || x <= -a || x >= a)
        {
            cout << -1 << endl;
            return;
        }

        if (x < 0)
            cout << st << endl;
        else
            cout << st + 1 << endl;
    }
}

int32_t main()
{
    alliswell

    solve();

    return 0;
}