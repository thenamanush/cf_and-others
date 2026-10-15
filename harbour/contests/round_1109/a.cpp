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

    string s;
    cin >> s;

    int mx = 0, cnt = 0;

    for (char c : s)
    {
        if (c == '#')
        {
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }

    mx = max(mx, cnt);

    cout << (mx + 1) / 2 << '\n';
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