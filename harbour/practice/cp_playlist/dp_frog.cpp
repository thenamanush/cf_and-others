#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N];
int dp[N];

int frog(int x)
{
    if (x == 0)
        return 0;

    if (dp[x] != -1)
        return dp[x];

    int ans = INT_MAX;

    ans = min(ans, frog(x - 1) + abs(h[x] - h[x - 1]));

    if(x>1)
    ans = min(ans, frog(x - 2) + abs(h[x] - h[x - 2]));

    return dp[x] = ans;
}

int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    cout << frog(n - 1) << endl;
}