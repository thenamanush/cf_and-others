#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int red = 0, blue = 0;

    for (int i = 0; i < 2 * n; ++i)
    {
        if (s[i] == '1')
        {
            int nxt = (i + 1) % (2 * n);

            if (s[nxt] == '0')
            {
                if (i & 1)
                    red++;
                else
                    blue++;
            }
            else
            {
                if (i & 1)
                    blue++;
                else
                    red++;
            }
        }
    }
    cout << blue << ' ' << red << endl;
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