#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n)
{
    ll q, l;
    cin >> q >> l;
    ll lft = q - l;

    vector<ll> ans;
    for (int i = 1; i * i <= lft; ++i)
    {
        if (lft % i == 0)
        {
            ans.push_back(i);
            if (i != lft / i)
                ans.push_back(lft / i);
        }
    }
    sort(ans.begin(), ans.end());
    cout << "Case " << n << ": ";

    if (ans[ans.size() - 1] < l)
    {
        cout << "impossible" << endl;
        return;
    }
    for (auto &it : ans)
    {
        if (it > l)
            cout << it << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
        solve(i);
}