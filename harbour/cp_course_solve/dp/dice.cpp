#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int N = 1e6 + 7;
int dp[N];
bool ok[N];

int ways(int n) {
    if(n < 0) return 0;
    if(n == 0) return 1;
    if(ok[n]) return dp[n];

    dp[n] = (ways(n - 1) + ways(n - 2)) % MOD;
    dp[n] = (dp[n] + ways(n - 3)) % MOD;
    dp[n] = (dp[n] + ways(n - 4)) % MOD;
    dp[n] = (dp[n] + ways(n - 5)) % MOD;
    dp[n] = (dp[n] + ways(n - 6)) % MOD;
    ok[n] = true;
    return dp[n];
}

int main() {
    int n; cin >> n;
    cout << ways(n) << endl;
}