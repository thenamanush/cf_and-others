#include<bits/stdc++.h>
using namespace std;
#define justice_for_hadi ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'
const int inf = 1e18;

int dist(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

void solve() {
    int n, ax, ay, bx, by;
    cin >> n >> ax >> ay >> bx >> by;

    map<int, int> top, bot;
    top[ax] = bot[ax] = ay;
    top[bx] = bot[bx] = by;

    vector<int> cx(n), cy(n);
    for(int i = 0; i < n; ++i) cin >> cx[i];
    for(int i = 0; i < n; ++i) cin >> cy[i];

    for(int i = 0; i < n; ++i) {
        if(!top.count(cx[i])) {
            top[cx[i]] = bot[cx[i]] = cy[i];
            continue;
        }
        top[cx[i]] = max(top[cx[i]], cy[i]);
        bot[cx[i]] = min(bot[cx[i]], cy[i]);
    }

    vector<pair<int, int>> tp, bp;
    for(auto &[x, y] : top) {
        tp.push_back({x, y});
    }
    for(auto &[x, y] : bot) {
        bp.push_back({x, y});
    }

    n = tp.size();
    vector<vector<int>> dp(n, vector<int> (2, inf));
    dp[0][0] = dp[0][1] = 0;
    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < 2; ++j) {
            for(int k = 0; k < 2; ++k) {
                auto prev = (k ? tp[i - 1] : bp[i - 1]);
                auto cur = (j ? bp[i] : tp[i]);
                dp[i][j] = min(dp[i][j], dp[i - 1][k] + dist(prev, cur) + tp[i].second - bp[i].second);
            }
        }
    }
    cout << dp[n - 1][1] << endl;
}

int32_t main() {
    justice_for_hadi

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}