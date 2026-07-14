#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 2e5 + 7;
int a[N];

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
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