#include<bits/stdc++.h>
using namespace std;

#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

const int N = 2e5 + 7;

int a[N];
int dp[N];
int n, k;

int ans(int idx) {
    if(idx >= n) return 0;

    if(dp[idx] != -1) return dp[idx];

    int take = a[idx] + ans(idx + k);

    int skip = ans(idx + 1);

    return dp[idx] = max(take, skip);
}

void solve() {
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    memset(dp, -1, sizeof(dp));

    cout << ans(k - 1) << endl;
}

int32_t main() {
    alliswell

    int t; cin >> t;
    while(t--) solve();

    return 0;
}