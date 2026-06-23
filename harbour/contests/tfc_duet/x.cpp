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
    string s, t;
    cin >> s >> t;
    // map<char, int> mp;
    // for (int i = 0; i < n; ++i)
    // {
    //     mp[s[i]]++;
    //     mp[t[i]]++;
    // }
    // for (char c = 'a'; c <= 'z'; ++c)
    // {
    //     if (mp[c] == 0)
    //     {
    //         for (int i = 0; i < n; ++i)
    //         {
    //             cout << c;
    //         }
    //         cout << endl;
    //         return;
    //     }
    // }
    string ans = string(n, 'a');
    // cout << ans << endl;
    for (int i = 0; i < n / 2; ++i)
    {
        string ad = "";
        ad += s[i];
        ad += t[i];
        ad += s[n - i - 1];
        ad += t[n - i - 1];

        sort(ad.begin(), ad.end());
        ans[i] = ad[1];
        ans[n - i - 1] = ad[1];
    }
    if (n & 1)
    {
        ans[n / 2] = min(s[n / 2], t[n / 2]);
    }
    cout << ans << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();
}