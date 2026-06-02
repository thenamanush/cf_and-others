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

    int j = n;
    vector<int> ans;
    bool f = true;
    while (j--)
    {
        if (f && a[j] > 0)
        {
            ans.push_back(j + 1);
            f = false;
            continue;
        }
        else if (!f && a[j] < 0)
        {
            ans.push_back(j + 1);
            f = true;
            continue;
        }
    }
    cout << ans.size() << endl;
    for (auto &it : ans)
        cout << it << ' ';
    cout << endl;
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