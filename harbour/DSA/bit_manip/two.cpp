// changing two numbers by flipping minimum bit

#include<bits/stdc++.h>
using namespace std;

int main(){
    int start = 10, goal = 7;
    int ans = start ^ goal;

    int cnt = 0;
    for(int i = 0; i < 32; ++i){
        if(ans & (1 << i)){
            cnt++;
        }
    }
    cout << cnt << endl;
}