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
    vector<int> a(n);
    int z = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 0)
            z = i;
    }
    int l = z - 1, r = z + 1;
    set<int> st;
    for (int i = 0; i < n; ++i)
        st.insert(i);
}

int32_t main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();
}