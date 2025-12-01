#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ll ans = 1;

    for(ll i = 2; i * i <= n; ++i){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            ans = max(ans, i);
        }
    }
    if(n > 1){
        ans = max(ans, n);
    }
    cout << ans << endl;
}