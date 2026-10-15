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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = accumulate(a.begin(), a.end(), 0LL);
    int d = 0;
    if (n & 1)
        d = n / 2 + 1;
    else
        d = n / 2;

    if (sum < d)
        cout << "Elsie" << endl;
    else
        cout << "Bessie" << endl;
    // cout << sum << ' ' << d << endl;
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