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
    string s;
    cin >> n >> s;
    vector<int> cnt(26, 0);

    if (n > 26)
        return void(cout << "NO" << endl);

    bool ok = true;
    for (char ch : s)
    {
        if (!ok)
            break;
        int idx = ch - 'a';
        cnt[idx]++;
        if (cnt[idx] > 1)
            ok = false;
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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