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
    map<int, int> mp;
    set<int> s;
    for (int i = 0; i <= n; i++)
    {
        s.insert(i);
    }
    for (auto &i : a)
    {
        cin >> i;
        mp[i]++;
        if (s.find(i) != s.end())
        {
            s.erase(i);
        }
    }
    string ans = "";
    if (mp[0] == 1)
        return void(cout << "NO" << endl);

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > 1)
        {
            ans += 'A';
            mp[a[i]] = 0;
        }
        else if (mp[a[i]] == 1)
        {
            ans += 'C';
        }
        else if (mp[a[i]] == 0)
        {
            ans += 'B';
            mp[a[i]] = 0;
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