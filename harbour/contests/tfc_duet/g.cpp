#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, p;
    cin >> n >> p;
    char c[n][p];
    int x[n][p];
    int ac[p] = {0}, at[p] = {0}, wa[p] = {0};

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < p; ++j)
        {
            cin >> c[i][j] >> x[i][j];
        }
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < p; ++j)
    //     {
    //         cout << c[i][j] << ' ' << x[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < p; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            // if (c[i][j] == '+')
            //     ac[j]++;
            // if (x[i][j] != 0 || c[i][j] == '+')
            //     at[j]++;
            // wa[j] += x[i][j];
            if (c[j][i] == '+')
                ac[i]++;
            if (x[j][i] != 0 || c[j][i] == '+')
                at[i]++;
            wa[i] += x[j][i];
            // cout << x[j][i] << ' ';
        }
        // cout << endl;
    }
    for (int i = 0; i < p; ++i)
    {
        cout << ac[i] << ' ' << at[i] << ' ' << wa[i] << endl;
    }
}

int32_t main()
{
    alliswell

    // int t = 1;
    // cin >> t; while(t--)
    solve();
}