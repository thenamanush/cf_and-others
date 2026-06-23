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

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int sum = accumulate(a.begin(), a.end(), 0ll);
    if (sum >= n)
        return void(cout << "NO" << endl);

    cout << "YES" << endl;
    vector<pair<int, int>> p;
    vector<int> zero;

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > 0)
            p.push_back({a[i], i});
        else
            zero.push_back(i);
    }

    sort(p.begin(), p.end(),
         [](const pair<int, int> &a, const pair<int, int> &b)
         {
             if (a.first != b.first)
                 return a.first < b.first;

             return a.second > b.second;
         });
    for (auto &[x, y] : p)
    {
        while (x--)
        {
            cout << y << ' ' << zero.back() << endl;
            zero.pop_back();
        }
        zero.push_back(y);
    }
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();
}