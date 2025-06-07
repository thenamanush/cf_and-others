#include<bits/stdc++.h>
using namespace std;

void rec(int n){
    if(n == 5)return;
    cout << "Noman" << endl;
    n++;
    rec(n);
}

void backtrack(int n){
    if(n > 3)return;
    n++;
    backtrack(n);
    cout << n << endl;
}

void nsum(int i, int sum){
    if(i < 0){
        cout << sum << endl;
        return;
    }
    nsum(i-1, sum + i);
}

// functional recursion
int fnsum(int n){
    if(n == 0){
        return 0;
    }
    return n + fnsum(n-1);
}
int fact(int n){
    if(n < 2){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    //rec(0);
    //backtrack(0);
    nsum(4, 0);
    int ans = fnsum(5);
    cout << ans << endl;
    int res = fact(5);
    cout << res << endl;
}