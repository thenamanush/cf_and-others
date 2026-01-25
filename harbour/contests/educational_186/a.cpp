#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool f = false;
    for (int i = 0; i < n - 3; ++i)
    {
        if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2' && s[i + 3] == '5')
        {
            f = true;
            break;
        }
    }
    if(!f) cout << 0 << endl;
    else {
        for (int i = 0; i < n - 3; ++i)
    {
        if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2' && s[i + 3] == '6')
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}