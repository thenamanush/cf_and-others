#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'
const int N = 101;
int n, W;
int weight[N], val[N], dp[N][100007];

int total(int i, int w)
{
    if (i > n)
        return 0;
    int &ans = dp[i][w];
    if (ans != -1)
        return ans;

    ans = total(i + 1, w);
    if (w + weight[i] <= W)
        ans = max(ans, total(i + 1, w + weight[i]) + val[i]);

    return ans = dp[i][w];
}

int32_t main()
{
    alliswell

            cin >>
        n >> W;
    for (int i = 1; i <= n; ++i)
    {
        cin >> weight[i] >> val[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << total(1, 0) << endl;
}