#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
#define ll long long
#define nl '\n'

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n;
    cin >> n;

    char v[3][3];
    vector<string> tem;
    for (ll i = 0; i < 3; i++)
    {
        string x;
        cin >> x;
        tem.push_back(x);
    }

    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            v[i][j] = tem[i][j];
        }
    }

    while (n--)
    {
        string b;
        cin >> b;
        int o = b[0] - '0';
        char c = b[1];

        int m = o - 1;
        char w = v[m][m], x = v[m][m + 1], y = v[m + 1][m], z = v[m + 1][m + 1];

        if (c == 'C')
        {
            v[m][m] = y;
            v[m][m + 1] = w;
            v[m + 1][m] = z;
            v[m + 1][m + 1] = x;
        }
        else
        {
            v[m][m] = x;
            v[m][m + 1] = z;
            v[m + 1][m] = w;
            v[m + 1][m + 1] = y;
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << v[i][j];
        }
        cout << nl;
    }
}

int main()
{
    alliswell

        int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
