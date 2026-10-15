#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

int n;
vector<int> a;

bool check(int i, int take, int sum)
{
    if (i == n)
        return (take > 1 && sum == 0);

    return (check(i + 1, take, sum) ||
            check(i + 1, take + 1, sum + a[i]) ||
            check(i + 1, take + 1, sum - a[i]));
}

void solve()
{
    cin >> n;
    a.resize(n);

    set<int> s;
    for (auto &x : a)
    {
        cin >> x;
        if (x)
            s.insert(abs(x));
    }

    if ((int)s.size() <= n - 1)
    {
        return void(cout << "YES" << endl);
    }

    cout << (check(0, 0, 0) ? "YES" : "NO") << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    cin >> t;
    while (t--)
        solve();
}