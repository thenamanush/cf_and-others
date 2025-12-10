#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e6 + 7;
int a[N];
bool dp[N];

int32_t main() {
    int n, k; cin >> n >> k;
    for(int i = 0; i < k; ++i) {
        cin >> a[i];
        dp[a[i]] = true;
    }
    for(int i = 1; i <= n; ++i) {
        if(!dp[i]) {
            for(int j = 0; j < k; ++j) {
                if(a[j] < i) {
                    if(!dp[i - a[j]]) {
                        dp[i] = true;
                    }
                }
            }
        }
    }
    for(int i = 1; i <= n; ++i) {
        if(dp[i]) cout << 'W';
        else cout << 'L';
    }
    cout << endl;
}