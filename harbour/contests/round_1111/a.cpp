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
    for (auto &x : a)
        cin >> x;

    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }

    int sum = accumulate(a.begin(), a.end(), 0LL);

    if (sum == 0)
    {
        cout << "YES" << endl;
        return;
    }

    sum = abs(sum);

    if (sum > 2 && (sum / 2) % 2 == 0)
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

    return 0;
}