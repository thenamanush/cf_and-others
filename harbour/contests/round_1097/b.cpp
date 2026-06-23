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
    unordered_map<int, int> mp;

    /*
    3 case posisble:
    - all non zero -> max * n
    - all zero -> n
    - mix -> mex covers max, max doesn't cover max
    */
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());

    // all zero
    if (a[0] == 0 && a[n - 1] == a[0])
        return void(cout << n << endl);
    // all non zero
    if (a[0] != 0)
        return void(cout << a[n - 1] * n << endl);
    // mix
    int ans = 0, mex = 0;
    swap(a[0], a[n - 1]);
    bool f = 0;
    sort(a.begin() + 1, a.end());
    for (int i = 0; i < n; ++i)
    {
        ans += a[0];
        if (a[i] == mex)
        {
            mex++;
            mp[a[i]]--;
            if (a[0] == mex)
            {
                mex++;
                mp[a[0]]--;
                f = 1;
            }
            ans += mex;
        }
    }
    if (!f)
        mp[a[0]]--;
    int rem = 0;
    for (auto &[v, f] : mp)
    {
        rem += f;
    }
    ans += rem * mex;
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