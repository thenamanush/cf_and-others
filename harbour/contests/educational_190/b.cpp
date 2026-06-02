#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin >> s;

    int ans = 0;
    for (char c : s)
    {
        if (c == '4')
            ans++;
    }
    int it2 = -1, ito = -1, cnt_odd = 0, cnt_two = 0;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] == '2')
        {
            it2 = i;
            break;
        }
    }
    for (int i = 0; i < it2; ++i)
    {
        if (s[i] == '1' || s[i] == '3')
        {
            ito = i;
            break;
        }
    }
    if (ito != -1)
    {
        for (int i = ito; i <= it2; ++i)
        {
            if (s[i] == '1' || s[i] == '3')
            {
                cnt_odd++;
            }
            else if (s[i] == '2')
            {
                cnt_two++;
            }
        }
    }
    if (cnt_odd && cnt_two)
    {
        ans += min(cnt_odd, cnt_two);
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