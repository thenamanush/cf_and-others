#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    sort(s.begin(), s.end());
    if (s[0] == s[n - 1])
        cout << 0 << endl;
    else
        cout << 2 * n - 2 << endl;
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