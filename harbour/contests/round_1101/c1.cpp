#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, t, s;
    cin >> n >> t >> s;
    string st;
    cin >> st;

    int tt = 0, ct = 0, ans = 0, cnt_a = 0;
    for (char c : st)
    {
        if (c == 'I')
        {
            if (tt < t)
            {
                ans++;
                tt++;
                ct += (s - 1);
            }
        }
        else if (c == 'A')
        {
            if (ct > 0)
            {
                ans++;
                ct--;
                cnt_a++;
            }
            else if (tt < t)
            {
                ans++;
                tt++;
                ct += ((s - 1));
            }
        }
        else
        {
            if (ct > 0)
            {
                ans++;
                ct--;
            }
            else if (tt < t && cnt_a)
            {
                cnt_a--;
                tt++;
                ans++;
                ct += (s - 1);
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