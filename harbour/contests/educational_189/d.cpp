#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define int long long
#define endl '\n'

const int MOD = 998244353;

int get_count(int n, int v) {
    if(v == 1) return (n + 3) / 4;
    if(v == 0) return (n + 1) / 4 + 1;
}

void solve() {
    int n, x;
    cin >> n >> x;

    int to0 = get_count(n, 0);
    int sm0 = get_count(x - 1, 0);

    int to1 = get_count(n, 1);
    int sm1 = get_count(x - 1, 1);

    int lr0 = (to0 - sm0 + MOD) % MOD;
    int lr1 = (to1 - sm1 + MOD) % MOD;

    int ans = 0;

    ans = ((sm0 % MOD) * (lr0 % MOD)) % MOD;
    ans = (ans + (sm1 % MOD) * (lr1 % MOD)) % MOD;

    cout << ans << endl;
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}