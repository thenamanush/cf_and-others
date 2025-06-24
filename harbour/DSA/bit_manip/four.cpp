#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> x;
    for(int i = 0; i < 7; ++i){
        int n; cin >> n;
        x.push_back(n);
    }

    // have to print the number which is not twice in the array
    // xor is faster than using map
    int xr = 0;
    for(int i = 0; i < 7; ++i){
        xr ^= x[i];
    }
    cout << xr << endl;
}