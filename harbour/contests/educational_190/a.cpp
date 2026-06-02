#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a * 3 <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        cout << (n / 3) * b + min(b, (n % 3) * a) << endl;
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