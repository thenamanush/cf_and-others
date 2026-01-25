#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

ll lcm(ll a, ll b) {
    return a / std::gcd(a, b) * b;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll clash = n / lcm(a, b);
    ll red = n / a, blue = n / b;
    if(p > q) blue -= clash;
    else red -= clash;

    cout << (red * p) + (blue * q) << endl;
}