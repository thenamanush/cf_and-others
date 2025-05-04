// for T test cases, print it's factorial modulo 1e9+7

#include<bits/stdc++.h>
using namespace std;

const int M = 47;
const int N = 1e6+1;
vector<int>fact(N, 1);
int main()
{
    for(int i = 2; i < N; ++i){
        fact[i] = (fact[i-1] * i) % M;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fact[n] << endl;
    }
}