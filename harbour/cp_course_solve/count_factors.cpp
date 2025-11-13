#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ll n;
    while(cin >> n){
        if(n == 0) break;
        ll cnt = 1, tmp = n;
        for(int i = 2; i * i <= n; ++i){
            if(n % i == 0){
                while(n % i == 0){
                    n /= i;
                }
                cnt++;
            }
        }
        cout << tmp << " : " << cnt << endl;
    }
}