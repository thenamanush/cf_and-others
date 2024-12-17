#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool f = true;
    int flag = 0;

    // already sorted
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            continue;
        }
        else
        {
            f = false;
            flag = i;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = flag + 1; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    if (a[n - 1] <= a[0])
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}