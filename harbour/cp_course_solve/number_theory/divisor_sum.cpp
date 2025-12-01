#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n; cin >> n;
    ll ans = 1;
    
    if(n == 1){
        cout << 0 << '\n';
        return;
    }
    for(ll i = 2; i * i <= n; ++i){
        if(n % i == 0){
            ans += i;
            if(i != n / i){
                ans += (n / i);
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
}