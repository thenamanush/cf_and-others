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
    for (int i = 0; i < n - k; ++i)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
            if (s[i + k] == '1')
                s[i + k] = '0';
            else
                s[i + k] = '1';
        }
    }
    bool f = true;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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