#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+1;
int freq[N] = {0};

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;

        for(int j = 1; j * j <= x; ++j){
            if(x % j == 0){
                freq[j]++;
                if(j != x / j){
                    freq[x / j]++;
                }
            }
        }
    }
    for(int i = 1; i < N; ++i){
        cout << freq[i] << '\n';
    }
}