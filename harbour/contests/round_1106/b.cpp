#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> div;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
                div.push_back(n / i);
        }
    }
    for (int d : div)
    {
        if (d == x)
        {
            cout << "YES" << endl;
            return;
        }
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