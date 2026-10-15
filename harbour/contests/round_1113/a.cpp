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
    string ans;
    bool f1 = false, f2 = false;
    for (char c : s)
    {
        if (c == '0')
        {
            if (f1)
            {
                ans += c;
            }
            else
            {
                f1 = true;
            }
        }
        else if (c == '1')
        {
            if (f2)
            {
                ans += c;
            }
            else
            {
                f2 = true;
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