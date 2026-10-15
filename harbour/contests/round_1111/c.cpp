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

    if (a == b)
        return void(cout << 0 << endl);

    int zero = 0, one = 0, cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0 && b[i] == 1)
            zero++;
        else if (a[i] == 1 && b[i] == 0)
            one++;
        else if (a[i] == 0 && b[i] == 0)
            cnt0++;
        else
            cnt1++;
    }

    if (one & 1)
        return void(cout << 1 << endl);
    if (one > 0)
        return void(cout << 2 << endl);

    if (cnt1 > 0 && cnt0 > 0)
        cout << 2 << endl;
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