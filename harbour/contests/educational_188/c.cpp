#include<bits/stdc++.h>
using namespace std;
#define alliswell ios_base::sync_with_stdio(false); cin.tie(NULL);

#define endl '\n'
#define int long long

int lcm(int a, int b) {
    return (a * b) / std::gcd(a, b);
}

void solve() {
    int a, b, c, m;
    cin >> a >> b >> c >> m;

    int A = m / a;
    int B = m / b;
    int C = m / c;

    int abc = lcm(a, lcm(b, c));
    abc = m / abc;
    int ab = lcm(a, b);
    ab = m / ab - abc;
    int ac = lcm(a, c);
    ac = m / ac - abc;
    int bc = lcm(b, c);
    bc = m / bc - abc;

    int alice = A * 6 - abc * 4 - (ab + ac) * 3;
    int bob = B * 6 - abc * 4 - (ab + bc) * 3;
    int carrot = C * 6 - abc * 4 - (ac + bc) * 3;

    cout << alice << " " << bob << " " << carrot << endl; 
}

int32_t main() {
    alliswell

    int t = 1;
    cin >> t; while(t--) solve();
    
    return 0;
}