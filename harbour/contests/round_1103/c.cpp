#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int a, b, x;
    cin >> a >> b >> x;
    if (a < b)
        swap(a, b);

    int ans = a - b, cnt = 0;
    while (a > b)
    {
        a /= x;
        cnt++;
    }
    if (a == b)
        return void(cout << min(ans, cnt) << endl);

    int add = abs(a - b);
    add = min(abs(a / x - b) + 1, add);
    add = min(abs(b / x - a) + 1, add);
    add = min(abs(a / x - b / x) + 2, add);

    cout << min(ans, cnt + add) << endl;
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