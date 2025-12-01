#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];

    int it = 0, prev = n - 1, ans = 0;
    while(it < prev){
        // it < next and it < prev
        if(a[it] < a[it+1] && a[it] < a[prev]){
            ans += min(a[it+1], a[prev]);
            it++;
        }
        // it > next and it > prev
        else if(a[it] > a[it+1] && a[it] > a[prev]){
            ans += a[it];
            a[it+1] = a[it];
            it++;
        }
        // it < next and it > prev
        else if(a[it] < a[it+1] && a[it] > a[prev]){
            ans += a[it];
            prev--;
        }
        // it > next and it < prev
        else{
            ans += a[it];
            a[it+1] = a[it];
            it++;
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