#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

const int mod = 998244353;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool f = true;

    for (char c : s)
    {
        if (c != '?')
        {
            f = false;
            break;
        }
    }

    if (f)
        return void(cout << 4 << endl);

    for (int i = 0; i + 2 < n; ++i)
    {
        if (s[i] == s[i + 2] && s[i] != '?')
            return void(cout << 0 << endl);
    }

    bool x = true;
    for (int i = 0; i < n; i += 2)
        if (s[i] != '?')
            x = false;
    if (x)
        return void(cout << 2 << endl);
    x = true;
    for (int i = 1; i < n; i += 2)
        if (s[i] != '?')
            x = false;
    if (x)
        return void(cout << 2 << endl);

    cout << 1 << endl;
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