// Author: Shawn Das Shachin-->(shawn_das)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define pb push_back
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define OPTIMIZE_IO              \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define setbit(x) __builtin_popcount(x);
#define printp(v)                                                   \
    {                                                               \
        for (auto &it : v)                                          \
            std::cout << it.first << " " << it.second << std::endl; \
    }
#define printarr(arr)               \
    {                               \
        for (auto &it : arr)        \
            std::cout << it << " "; \
        std::cout << std::endl;     \
    }

void solve()
{
    int n;
    cin >> n;
    vector<string> vs(n), temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vs[i];
    }
    // printarr(vs);
    int m;
    cin >> m;
    vector<ll> count(n, 0);

    for (int i = 0; i < n; i++)
    {
        temp[i] = vs[i];
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        temp[a] = temp[b];
        count[a] = count[b] + 1;
    }

    for (int i = 0; i < count[0]; i++)
    {
        cout << "I_love_";
    }
    cout << temp[0] << endl;
}
int main()
{
    OPTIMIZE_IO;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}