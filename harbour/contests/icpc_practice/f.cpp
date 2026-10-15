#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();

    int omil = 0, c4 = 0, c7 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            omil++;
            if (a[i] == '4')
                c4++;
            else
                c7++;
        }
    }
    int parbo = min(c4, c7);
    omil -= parbo;

    cout << omil << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();

    return 0;
}