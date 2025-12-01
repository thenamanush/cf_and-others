#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        while(1) {
            ll g = std::gcd(a, b);
            if(g == 1) {
                break;
            }
            b /= g;
        }

        if(b == 1) cout << "Yes\n";
        else cout << "No\n";
    }
}