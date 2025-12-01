#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e8;

int main(){
    vector<bool> prime(N, true);
    prime[0] = prime[1] = false;

    for (int j = 4; j < N; j += 2) prime[j] = false;

    for(ll i = 3; i * i < N; i += 2){
        if(prime[i]){
            for(ll j = i * i; j < N; j += 2 * i){
                prime[j] = false;
            }
        }
    }

    ll cnt = 1;
    cout << 2 << '\n';
    for(int i = 3; i < N; i += 2){
        if(prime[i]){
            cnt++;
            if(cnt % 100 == 1) cout << i << '\n';
        }
    }
}