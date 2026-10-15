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

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    set<int> st1, st2;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i)
    {
        if (!st1.count(a[i]))
        {
            if (a[i] % k == 0)
            {
                if (!st1.count(a[i] / k))
                    st1.insert(a[i]);
                else
                    st2.insert(a[i]);
            }
            st1.insert(a[i]);
        }
    }
    cout << max(st1.size(), st2.size()) << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();
}