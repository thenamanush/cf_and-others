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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> e, o;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            e.push_back(a[i]);
        else
            o.push_back(a[i]);
    }

    sort(e.rbegin(), e.rend());
    sort(o.rbegin(), o.rend());

    int i = 0, j = 0;
    int cnt_e = 0, cnt_o = 0;
    while (i < e.size() || j < o.size())
    {
        bool f;
        if (i == e.size())
            f = false;
        else if (j == o.size())
            f = true;
        else
            f = (e[i] > o[j]);

        if (f)
        {
            cnt_e++;
            i++;
        }
        else
        {
            cnt_o++;
            j++;
        }

        if (abs(cnt_e - cnt_o) > 1)
            return void(cout << "NO" << endl);
    }
    cout << "YES" << endl;
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
