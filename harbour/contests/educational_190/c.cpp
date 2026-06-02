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

    int u = 0, o = 0, sum = 0, sup = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] < 2)
            u++;
        else
        {
            sum += a[i];
            sup += (a[i] / 2 - 1);
            o++;
        }
    }
    if (n == 1 && sum < 3)
        return void(cout << 0 << endl);
    if (o == 1)
    {
        int sup = sum / 2;
        cout << sum + min(sup, u) << endl;
    }
    else
    {
        cout << sum + min(sup, u) << endl;
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