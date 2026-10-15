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
    set<int> st;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        st.insert(toupper(s[0]));
    }
    bool f = true;
    for (int i = 0; i < k; ++i)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); ++i)
        {
            if (!st.count(s[i]))
                f = false;
        }
    }
    if (f)
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
}