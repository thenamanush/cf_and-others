#include <bits/stdc++.h>
using namespace std;

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 1;
    for (int i = 1; i < n; i++)
        cnt += (s[i] != s[i - 1]);

    int ans = cnt;

    for (int i = 1; i < n - 1; i++)
    {
        int b = (s[i - 1] != s[i]) + (s[i] != s[i + 1]);
        int a = (s[i - 1] != s[i + 1]);

        ans = min(ans, cnt - b + a);
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
}