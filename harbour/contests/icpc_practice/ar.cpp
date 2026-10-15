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

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int ans = n;

    for (int i = 0; i <= n; i++)
    {
        map<int, int> mp;
        bool ok = true;

        for (int j = 0; j < i; j++)
        {
            mp[a[j]]++;
            if (mp[a[j]] > 1)
            {
                ok = false;
                break;
            }
        }

        if (!ok)
            continue;

        int pos = n;

        for (int j = n - 1; j >= i; j--)
        {
            mp[a[j]]++;
            if (mp[a[j]] == 1)
                pos = j;
            else
                return void(cout << pos - i << endl);
            // experiment
        }
    }
    cout << 0 << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();

    return 0;
}