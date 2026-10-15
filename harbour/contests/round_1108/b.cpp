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
    if (n <= 2)
    {
        return void(cout << (n == 1 ? 1 : -1) << endl);
    }
    int prv = 3;
    for (int i = 1; i <= n; ++i)
    {
        if (i <= 3)
        {
            cout << i << " ";
        }
        else
        {
            cout << prv * 2 << ' ';
            prv *= 2;
        }
    }
    cout << endl;
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