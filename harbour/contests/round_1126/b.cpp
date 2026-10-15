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

    vector<int> fr(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        fr[x]++;
    }
    for (int i = 0; i <= n; i++)
    {
        if (fr[i] >= 2 * k)
            continue;
        cout << (fr[i] == 2 * k - 1 ? "YES" : "NO") << endl;
        return;
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