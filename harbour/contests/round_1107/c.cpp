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
    string s;
    cin >> n >> s;
    bool zo = false, oz = false;

    for (int i = 0; i + 1 < n; ++i)
    {
        if (s[i] == '0' && s[i + 1] == '1')
            zo = true;
        if (s[i] == '1' && s[i + 1] == '0')
            oz = true;
    }
    if (zo && oz)
        cout << 1 << endl;
    else
    {
        sort(s.begin(), s.end());
        if (s[0] == s[n - 1])
            cout << 1 << endl;
        else
            cout << 2 << endl;
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