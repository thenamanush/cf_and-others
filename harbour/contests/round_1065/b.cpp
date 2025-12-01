#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int cnt = 0, nxt = 0;
    for (int i = 0; i < n; ++i)
{
    if (a[i] == -1)
    {
        if (cnt % 2 == 0)
        {
            a[i] = 0;
            nxt = (i > 0 ? a[i-1] : 0);
        }
        else
        {
            a[i] = nxt;
        }
        cnt++;
    }
}

    ll sum = 0;
    for (int i = 1; i < n; ++i)
    {
        sum += (a[i] - a[i - 1]);
    }
    cout << abs(sum) << endl;
    for (auto &it : a){
        cout << it << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}