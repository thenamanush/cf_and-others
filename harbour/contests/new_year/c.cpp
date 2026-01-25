#include <bits/stdc++.h>
using namespace std;

char getChar(long long k) {
    long long l = 1, r = 2e8; // upper bound for block number
    long long block = -1;

    while (l <= r) {
        long long mid = (l + r) / 2;
        long long total = mid * (mid + 3) / 2;
        if (total >= k) {
            block = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    long long prev_total = (block - 1) * (block + 2) / 2;
    long long pos_in_block = k - prev_total;

    if (pos_in_block <= block) return 'a';
    else return 'b';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << getChar(k) << '\n';
    }
}
