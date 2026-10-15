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
        cin >> a[i];
    sort(a.begin(), a.end());
    cout << a[n - 1] - a[0] + 1 << endl;
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