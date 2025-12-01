#include <bits/stdc++.h>
using namespace std;

const int N = 2e7;
bitset<N> prime;

void sieve(){
    prime[1] = false;
    for(int i = 2; i < N; ++i){
        prime[i] = true;
    }

    for(int i = 2; i * i < N; ++i){
        if(prime[i]){
            for(int j = i * i; j < N; j += i){
                prime[j] = false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    vector<pair<int, int>> twin_primes;
    for(int i = 2; i < N; ++i){
        if(prime[i] && prime[i+2]){
            twin_primes.push_back({i, i + 2});
        }
    }
    // cout << twin_primes.size() << endl;
    int n; while(cin >> n){
        cout << '(' << twin_primes[n-1].first << ", " << twin_primes[n-1].second << ')' << endl;
    }
}