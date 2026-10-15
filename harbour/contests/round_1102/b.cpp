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
    int rem = n % 12;
    if (rem != 10)
        return void(cout << rem << ' ' << n - rem << endl);
    else if (n - 22 >= 0)
    {
        cout << 22 << ' ' << n - 22 << endl;
    }
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