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

    int m = 1;
    while (m <= n)
        m <<= 1;

    // greedy: every prefix xor may appear at most twice
    vector<int> cnt(m, 0), ans;
    int p = 0;
    cnt[0] = 1;
    while (true)
    {
        if (cnt[p] < 2)
        {
            ans.push_back(0);
            cnt[p]++;
            continue;
        }
        int nx = -1;
        for (int x = 1; x <= n; ++x)
            if (cnt[p ^ x] == 0)
            {
                nx = x;
                break;
            }
        if (nx == -1)
            break;
        ans.push_back(nx);
        p ^= nx;
        cnt[p]++;
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
