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
    vector<int> a(n), b(n);
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    int ans = 0;
    bool f;
    for (int i = 0; i < n; ++i)
    {
        int idx = -1;
        for (int j = i; j < n; ++j)
        {
            if (a[j] <= b[i])
            {
                idx = j;
                break;
            }
        }
        if (idx == -1)
            return void(cout << -1 << endl);
        for (int j = idx; j > i; --j)
        {
            swap(a[j], a[j - 1]);
            ans++;
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