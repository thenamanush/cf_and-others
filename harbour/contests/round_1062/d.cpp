#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd_all(const vector<ll> &a) {
    ll g = a[0];
    for (ll x : a) g = gcd(g, x);
    return g;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        ll g = gcd_all(a);

        // Check from 2 upward for the first coprime number
        for (ll x = 2; x <= 100; ++x) { // 100 is enough since primes are dense
            if (gcd(g, x) == 1) {
                cout << x << "\n";
                goto next_case;
            }
        }

        cout << -1 << "\n"; // practically unreachable
    next_case:;
    }
}
