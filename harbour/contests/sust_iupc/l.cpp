#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;

        auto it = lower_bound(a.begin(), a.end(), x);

        if (it == a.end())
            a.push_back(x);
        else
            *it = x;

        int l = a.size();
        int m = a.back();

        int ans = sum + k * l;

        if (m < l)
            ans += k * (k - 1) / 2;

        cout << ans << " ";
    }

    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();

    return 0;
}