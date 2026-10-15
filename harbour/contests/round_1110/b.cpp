#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> a(n);

    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());

    int ans = 0, cnt = 0;
    for (auto &it : a)
    {
        if (it >= c)
        {
            cnt++;
            ans += (it - c);
        }
    }
    int hlf = (n & 1 ? n / 2 + 1 : n / 2);
    if (cnt >= hlf)
        return void(cout << ans << endl);

    int sup = hlf - cnt;
    sort(a.rbegin(), a.rend());

    for (auto &it : a)
    {
        if (it < c && sup)
        {
            sup--;
            ans += (it - c);
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