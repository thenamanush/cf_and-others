#include <bits/stdc++.h>
using namespace std;
const long long M = 2e5 + 10, MOD = 1000000007;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        multiset<ll> st;
        int n, k;
        cin >> n >> k;
        ll ans = 1e18;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<ll> pr(n + 2, 1e9);
        vector<ll> lr(n + 2, 1e9);
        ll cur = 1e9;
        for (int i = 1; i <= n; i++)
        {
            cur = min(cur, a[i]);
            pr[i] = cur;
        }
        cur = 1e9;
        for (int i = n; i >= 1; i--)
        {
            cur = min(cur, a[i]);
            lr[i] = cur;
        }
        ll sum = 0;
        int l = 1;
        for (int i = 1; i <= n; i++)
        {
            sum += a[i];
            st.insert(a[i]);
            if (i >= k)
            {
                ans = min(ans, sum);
                auto it = st.rbegin();
                ans = min(ans, sum - *it + lr[i + 1]);
                ans = min(ans, sum - *it + pr[l - 1]);
                st.erase(st.find(a[l]));
                sum -= a[l];
                l++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
