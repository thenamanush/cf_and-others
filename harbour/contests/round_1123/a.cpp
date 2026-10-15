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
    char c;
    string s;
    cin >> n >> c >> s;

    int ans = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] == s[j])
            continue;
        if (s[i] == c || s[j] == c)
            ans += 1;
        else
            ans += 2;
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
