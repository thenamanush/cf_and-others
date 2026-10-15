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

    int h = 1;
    while (h * 2 <= n)
        h <<= 1;

    // prefix order: 0,1,...,h-1 then 2h-1,2h-2,...,h (each prefix visited twice)
    vector<int> order;
    for (int v = 0; v < h; ++v)
        order.push_back(v);
    for (int v = 2 * h - 1; v >= h; --v)
        order.push_back(v);

    vector<int> ans;
    ans.push_back(0);
    for (int i = 1; i < (int)order.size(); ++i)
    {
        ans.push_back(order[i] ^ order[i - 1]);
        ans.push_back(0);
    }

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
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
