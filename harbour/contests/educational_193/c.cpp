#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<int> a(x), b(y);

    for (auto &i : a)
        cin >> i;

    for (auto &i : b)
        cin >> i;

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    set<int> st, stt;

    for (int i = 0; i < min(n, x); ++i)
        st.insert(a[i]);

    for (int i = 0; i < min(m - 1, y); ++i)
    {
        if (st.count(b[i]) == 0)
            st.insert(b[i]);
    }

    for (int i = 0; i < min(m, y); ++i)
        stt.insert(b[i]);

    for (int i = 0; i < min(n - 1, x); ++i)
    {
        if (stt.count(a[i]) == 0)
            stt.insert(a[i]);
    }

    int s1 = 0, s2 = 0;

    for (auto &it : st)
        s1 += it;

    for (auto &it : stt)
        s2 += it;

    int ans1 = max(s1, s2);

    st.clear();
    stt.clear();

    for (int i = 0; i < min(m - 1, y); ++i)
        st.insert(b[i]);

    for (int i = 0; i < min(n, x); ++i)
    {
        if (st.count(a[i]) == 0)
            st.insert(a[i]);
    }

    for (int i = 0; i < min(n - 1, x); ++i)
        stt.insert(a[i]);

    for (int i = 0; i < min(m, y); ++i)
    {
        if (stt.count(b[i]) == 0)
            stt.insert(b[i]);
    }

    s1 = 0;
    s2 = 0;

    for (auto &it : st)
        s1 += it;

    for (auto &it : stt)
        s2 += it;

    int ans2 = max(s1, s2);

    cout << max(ans1, ans2) << endl;
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