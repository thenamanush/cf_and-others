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
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int prefA = 0, prefB = 0;
    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        prefA += a[i];
        prefB += b[i];
        if (prefB < prefA)
        {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << endl;
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