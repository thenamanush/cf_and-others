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
    bool f = false;
    map<int, int> mp;
    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
        if (x >= 3)
            f = true;
    }
    if (f)
        return void(cout << "YES" << endl);
    else if (mp[2] > 1)
        return void(cout << "YES" << endl);
    else
        cout << "NO" << endl;
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