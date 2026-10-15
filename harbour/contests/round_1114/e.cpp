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
    multiset<int> st;

    for (int &x : a)
    {
        cin >> x;
        st.insert(x);
    }
    int s = accumulate(a.begin(), a.end(), 0ll);

    if (s <= 0)
        return void(cout << -1 << endl);

    vector<int> ans(n);
    int cur = 0;
    for (int i = 0; i < n; ++i)
    {
        auto it = st.lower_bound(1 - cur);
        cur += *it;
        st.erase(it);
        ans[i] = cur;
    }
    for (auto &it : ans)
        cout << it << ' ';
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