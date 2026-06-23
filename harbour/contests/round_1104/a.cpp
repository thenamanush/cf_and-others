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
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int mn = a[0];
    for (int i = 1; i < n; ++i)
    {
        a[i] = min(mn, a[i]);
        mn = min(mn, a[i]);
    }
    int sum = accumulate(a.begin(), a.end(), 0ll);
    cout << sum << endl;
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