#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    // Prefix sum
    vector<int> pfs(n + 1, 0);

    // Prefix minimum
    vector<int> pfm(n + 1, LLONG_MAX);

    // Suffix minimum
    vector<int> sfm(n + 2, LLONG_MAX);

    for (int i = 1; i <= n; ++i)
        pfs[i] = pfs[i - 1] + a[i];

    for (int i = 1; i <= n; ++i)
        pfm[i] = min(pfm[i - 1], a[i]);

    for (int i = n; i >= 1; --i)
        sfm[i] = min(sfm[i + 1], a[i]);
    deque<int> dq;

    int ans = LLONG_MAX;

    for (int i = 1; i <= n; ++i)
    {
        // Remove indices outside the current window
        while (!dq.empty() && dq.front() < i - k + 1)
            dq.pop_front();

        // Remove smaller elements from the back
        while (!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();

        dq.push_back(i);

        // We have a complete window when i >= k
        if (i >= k)
        {
            int s = pfs[i] - pfs[i - k];

            int mn = min(pfm[i - k], sfm[i + 1]);

            int mx = a[dq.front()];

            if (mx > mn)
            {
                s -= mx;
                s += mn;
            }

            ans = min(ans, s);
        }
    }

    cout << ans << endl;
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