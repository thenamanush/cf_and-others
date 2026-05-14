// string hashing
#include<bits/stdc++.h>
using namespace std;

const int p = 31, mod = 1e9 + 7;
const int N = 1e5 + 9;

int pw[N];
void prec() {
    pw[0] = 1;
    for(int i = 1; i < N; ++i) {
        pw[i] = 1ll * pw[i - 1] * p % mod;
    }
}

int get_hash(string x) {
    int n = x.size();
    int hsh = 0;
    for(int i = 0; i < n; ++i) {
        hsh += (1ll * x[i] * pw[i] % mod);
    }
    return hsh;
}

int main() {
    prec();
    string a, b; cin >> a >> b;
    
    cout << (get_hash(a) == get_hash(b) ? "Yes\n" : "No\n");
}