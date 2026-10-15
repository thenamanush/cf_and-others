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

    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
    }

    sort(a.begin(), a.end());
    cout << a[n - 1] - a[0] << " " << (a[0] != a[n - 1] ? mp[a[0]] * mp[a[n - 1]] : (n * (n - 1) / 2)) << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();
}