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

    int st = -1, en = -1;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '(')
        {
            st = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == ')')
        {
            en = i;
            break;
        }
    }
    int cnt1 = 0, cnt2 = 0;
    if (st != -1)
    {
        for (int i = st; i < n; ++i)
            if (s[i] == ')')
                cnt1++;
    }
    if (en != -1)
    {
        for (int i = en; i >= 0; --i)
            if (s[i] == '(')
                cnt2++;
    }
    int reduce = k;
    string ans(n, '0');

    if (cnt1 > cnt2)
    {
        for (int i = 0; i < n && reduce; ++i)
        {
            if (i >= st && s[i] == '(')
            {
                ans[i] = '1';
                reduce--;
            }
        }
    }
    else
    {
        for (int i = n - 1; i >= 0 && reduce; --i)
        {
            if (i <= en && s[i] == ')')
            {
                ans[i] = '1';
                reduce--;
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