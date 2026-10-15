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

    vector<int> b = a;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    if (b[0] != 0)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans;
    int s = 0;
    bool ok = true;

    for (int i = 0; i + 1 < (int)b.size(); i++)
    {
        int cnt = mp[b[i]];

        if (b[i + 1] < s || (b[i + 1] - s) % cnt)
        {
            ok = false;
            break;
        }

        int x = (b[i + 1] - s) / cnt;

        if (!ans.empty() && x <= ans.back())
        {
            ok = false;
            break;
        }

        s += (cnt * x);
        ans.push_back(x);
    }

    if (!ok)
    {
        cout << -1 << endl;
        return;
    }

    if (ans.empty())
        ans.push_back(1);
    else
        ans.push_back(ans.back() + 1);

    map<int, int> value;

    for (int i = 0; i < (int)b.size(); i++)
        value[b[i]] = ans[i];

    for (int x : a)
        cout << value[x] << " ";
    cout << endl;
}

int32_t main()
{
    alliswell

        int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}