#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

int n;
vector<int> a;

int mex(int l, int r)
{
    set<int> st;
    for (int i = 0; i <= n; ++i)
        st.insert(i);

    while (l >= 0 && r < 2 * n && a[l] == a[r])
    {
        st.erase(a[l]);
        l--;
        r++;
    }
    return *st.begin();
}

void solve()
{
    cin >> n;
    a = vector<int>(2 * n);
    for (auto &it : a)
        cin >> it;

    /*
    observations:
    -> answer is at least 1, as 0 is the smallest palindrome with mex = 1
    decesion:
    -> check palindrome from both the zero with tp to increase the mex
    -> check palindrome between and beyond them
    */

    int z1 = -1, z2 = 0;
    for (int i = 0; i < 2 * n; ++i)
    {
        if (a[i] == 0)
        {
            if (z1 != -1)
                z2 = i;
            else
                z1 = i;
        }
    }
    cout << max({mex(z1, z1), mex(z2, z2), mex((z1 + z2) / 2, (z1 + z2 + 1) / 2)}) << endl;
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