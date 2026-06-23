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
    vector<int> a(n);
    set<int> st;
    map<int, int> mp;

    for (auto &i : a)
    {
        cin >> i;
        st.insert(i);
        mp[i]++;
    }

    while (!st.empty())
    {
        int mx = *st.rbegin();
        if (mp[mx] % 2 == 0)
        {
            return void(cout << "YES" << endl);
        }
        st.erase(mx);

        if (st.empty())
            break;

        int back = *st.rbegin();

        if (back + k >= mx)
            return void(cout << "YES" << endl);
    }
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