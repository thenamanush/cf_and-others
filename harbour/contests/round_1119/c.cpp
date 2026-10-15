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
    for (auto &i : a)
        cin >> i;

    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0 && !f)
        {
            a[i] = 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != 0 && !f)
        {
            a[i] = 1;
            f = true;
            break;
        }
    }
    for (auto &i : a)
    {
        if (i >= 0)
            cout << i << " ";
        else
            cout << 0 << " ";
    }
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