#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n);

    for(ll i = 0; i < n; ++i){
        cin >> a[i];
    }

    ll g = a[0];
    for(ll i = 1; i < n; ++i){
        g = std::gcd(g, a[i]);
    }
    //cout << g << endl;
    vector<int> ans;

    for(ll i = 1; i * i <= g; ++i){
        if(g % i == 0){
            ans.push_back(i);
            if(i != g / i){
                ans.push_back(g / i);
            }
        }
    }
    cout << ans.size() << endl;
}