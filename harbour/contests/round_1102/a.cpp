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

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    if (n <= 2)
    {
        for (int i = 0; i < n; ++i)
            cout << a[i] << ' ';
        cout << endl;
        return;
    }
    bool f = true;
    for (int i = 0; i + 2 < n; ++i)
    {
        if (a[i] % a[i + 1] != a[i + 2])
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << a[0] << ' ' << a[1] << endl;
    else
        cout << -1 << endl;
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