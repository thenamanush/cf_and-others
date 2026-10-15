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

    int cnt = 0;
    for (auto &c : s)
    {
        if (c == '1')
            cnt++;
    }
    if (cnt == n)
    {
        cout << string(n, 'a') << endl;
    }
    else if (cnt == 1 && s[0] == '1')
    {
        cout << string(n - 1, 'a') << 'b' << endl;
    }
    else if (cnt == 2 && s[0] == '1' && s[n - 1] == '1')
    {
        string ans(n, 'a');
        ans[n / 2] = 'b';
        if ((n & 1) != 1)
            ans[n / 2 - 1] = 'b';
        cout << ans << endl;
    }
    else
    {
        string ans = "";
        for (int i = 0; i < n; ++i)
        {
            if (i & 1 && s[i] == '0')
                ans += 'b';
            else if ((i & 1) != 1 && s[i] == '1')
                ans += 'a';
            else
                return void(cout << -1 << endl);
        }
        cout << ans << endl;
    }
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