#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> dp(N, -1);
vector<int> a(N);

int jump(int n)
{
    if(n == 0) return 0;
    if(dp[n] != -1) return dp[n];

    int cost = INT_MAX;
    cost = min(cost, jump(n-1) + abs(a[n] - a[n-1]));
    if(n > 1)
    {
        cost = min(cost, jump(n-2) + abs(a[n] - a[n-2]));
    }
    return dp[n] = cost;
}

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << jump(n-1) << endl;
}