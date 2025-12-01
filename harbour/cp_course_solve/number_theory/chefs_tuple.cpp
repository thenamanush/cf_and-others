#include<bits/stdc++.h>
using namespace std;
 
#define ll long long


void solve(){
    ll n, a, b, c; cin >> n >> a >> b >> c;
    vector<int> divs;

    for(int i = 1; i * i <= n; ++i){
        if(n % i == 0){
            divs.push_back(i);
            if(i != n / i){
                divs.push_back(n / i);
            }
        }
    }

    ll ans = 0;
    for(auto & x : divs){
        if(x <= a){
            for(auto & y : divs){
                if(y <= b){
                    // for(auto & z : divs){
                    //     if(z <= c){
                    //         if((ll)x * y * z == n){
                    //             ++ans;
                    //         }
                    //     }
                    // }

                if(n % (1ll * x * y) == 0){
                    int z = n / (x * y);

                    if(z <= c) ++ans;
                }
                }
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}