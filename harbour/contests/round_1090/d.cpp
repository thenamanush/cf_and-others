#include <bits/stdc++.h>
using namespace std;

#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define endl '\n'

const int N = 500000;
vector<int> primes;
vector<bool> flag(N, true);

void sieve() {
    flag[0] = flag[1] = false;
    for (int i = 2; i * i < N; i++) {
        if (flag[i]) {
            for (int j = i * i; j < N; j += i) {
                flag[j] = false;
            }
        }
    }
    for (int i = 2; i < N; i++) {
        if (flag[i]) primes.push_back(i);
    }
}

void solve() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << primes[i] * primes[i + 1] << " ";
    }
    cout << endl;
}

int32_t main() {
    alliswell
    sieve();
    int t; cin >> t;
    while (t--) solve();
    return 0;
}