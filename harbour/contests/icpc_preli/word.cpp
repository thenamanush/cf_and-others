#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define no cout  << "NO\n";
#define yes cout << "YES\n";

void solve(){
    ll a, v, l, n;
    cin >> a >> v >> l >> n;

    if(v == 1 || a == 1){
        no;
        return;
    }
    if(a - 2 > n){
        yes;
        return;
    }
    else{
        no;
    }
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}