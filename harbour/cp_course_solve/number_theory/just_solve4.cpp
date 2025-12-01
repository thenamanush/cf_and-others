#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main(){
    ll n, m, l, r;
    cin >> n >> m >> l >> r;

    ll key = (n * m) / std::gcd(n, m);
    cout << (r / key) - (l - 1) / key << '\n';
}