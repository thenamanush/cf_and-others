#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
const int N = 1e5 + 7;
int a[N], dp[N];

int f(int n) {
    if(n == 1) return 0;

    if(dp[n] != -1) return dp[n];
    int one = abs(a[n] - a[n - 1]) + f(n - 1);
    int two = INT_MAX;
    if(n > 2) two = abs(a[n] - a[n - 2]) + f(n - 2);    

    return dp[n] = min(one, two);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t = 1;
    // cin >> t; while(t--) solve();
    
    int n; cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    memset(dp, -1, sizeof dp);

    cout << f(n) << endl;
}