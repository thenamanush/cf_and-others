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

    for (int i = 0; i < 3; i++)
        cin >> a[i];

    sort(a, a + 3);

    if (a[0] + a[1] < a[2])
        cout << a[1] << endl;
    else
        cout << a[2] - a[0] << endl;
}

int32_t main()
{
    alliswell

        int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}