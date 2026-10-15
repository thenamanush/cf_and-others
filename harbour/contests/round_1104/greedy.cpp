#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    vector<int> st;

    for (int i = 0; i < n; i++)
    {
        int cur = a[i];

        while (!st.empty() && st.back() < cur)
        {
            cur += st.back();
            st.pop_back();
        }

        st.push_back(cur);
    }

    cout << *max_element(st.begin(), st.end()) << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}