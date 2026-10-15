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
    string s;
    cin >> s;

    int o = 0, z = 0;
    for (auto &x : s)
    {
        if (x == '1')
            o++;
        else
            z++;
    }
    int mx = max(o, z), mn = min(o, z);
    if (mx - mn > 2)
        return void(cout << -1 << endl);

    vector<int> ze, on;

    for (int i = 0; i < n;)
    {
        int j = i;
        while (j < n && s[j] == s[i])
            j++;

        int len = j - i;

        if (s[i] == '0')
            ze.push_back(len - 1);
        else
            on.push_back(len - 1);
        i = j;
    }
    int o_sum = accumulate(on.begin(), on.end(), 0ll);
    int z_sum = accumulate(ze.begin(), ze.end(), 0ll);
    int ans = o_sum + z_sum;
    if (max(o_sum, z_sum) - min(o_sum, z_sum) > 1)
    {
        int add = max(o_sum, z_sum) - min(o_sum, z_sum) - 1;
        ans += add;
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