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
    vector<int> frq(101, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        frq[x]++;
    }

    vector<int> ans;
    while (ans.size() < n)
    {
        for (int v = 100; v >= 1; v--)
        {
            if (frq[v] > 0)
            {
                ans.push_back(v);
                frq[v]--;
            }
        }
    }

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
