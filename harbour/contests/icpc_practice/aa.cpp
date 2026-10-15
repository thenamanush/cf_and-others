#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int a[3];
    for (int i = 0; i < 3; ++i)
        cin >> a[i];

    sort(a, a + 3);

    int ans = 0;
    a[2]--;
    for (int i = 0; i < 2; ++i)
    {
        if (a[i] < a[2])
        {
            ans += a[2] - a[i];
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();

    return 0;
}