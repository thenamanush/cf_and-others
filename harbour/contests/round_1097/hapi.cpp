#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0, it1 = 0, it2 = 0;
    bool f = true;

    for (int i = 0; i + 8 < n; i++)
    {
        if (s.substr(i, 9) == "happiness")
        {
            cnt++;

            if (f)
            {
                it1 = i + 1;
                f = false;
            }
            else
            {
                it2 = i + 1;
            }
        }
    }
    if (cnt > 2)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        if (cnt == 0)
        {
            for (int i = 0; i + 1 < n; ++i)
            {
                if (s[i] == s[i + 1])
                {
                    cout << i + 1 << ' ' << i + 2 << endl;
                    return;
                }
            }
            cout << 1 << ' ' << 2 << endl;
            return;
        }
        if (cnt == 2)
            cout << it1 << ' ' << it2 + 1 << endl;
        else
            cout << it1 << ' ' << it1 + 1 << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin >> t;
    // while(t--){
    solve();
    //}
}