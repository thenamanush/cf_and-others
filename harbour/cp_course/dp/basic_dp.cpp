#include<bits/stdc++.h>
using namespace std;

const int N = 50;
int a[N];
bool is_done[N];

// recursive dp
int fib(int n) {
    if(n <= 1) return n;
    if(is_done[n]) return a[n];

    a[n] = fib(n - 1) + fib(n - 2); 
    is_done[n] = true;
    return a[n];
}
//iterative dp
int fibo(int n) {
    a[0] = 0;
    a[1] = 1;

    for(int i = 2; i <= n; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n];
}

int main() {
    cout << fibo(40) << endl;
}