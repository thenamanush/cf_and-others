// this is more safer and error proof
#include<bits/stdc++.h>
using namespace std;
const int p1 = 31, p2 = 37, mod1 = 1e9 + 7, mod2 = 1e9 + 9;
const int N = 1e5 + 9;

int pw1[N], pw2[N];
void prec1() {
    pw1[0] = 1;
    for(int i = 1; i < N; ++i) {
        pw1[i] = 1ll * pw1[i - 1] * p1 % mod1;
    }
}
void prec2() {
    pw2[0] = 1;
    for(int i = 1; i < N; ++i) {
        pw2[i] = 1ll * pw2[i - 1] * p2 % mod2;
    }
}

pair<int, int> get_hash(string s) {
    int n = s.size();
    int hsh1 = 0, hsh2 = 0;
    for(int i = 0; i < n; ++i) {
        hsh1 += (1ll * s[i] * pw1[i] % mod1);
        hsh2 += (1ll * s[i] * pw2[i] % mod2);
    }
    return{hsh1, hsh2};
}

int main() {
    prec1();
    prec2();

    string a, b; cin >> a >> b;
    if(get_hash(a) == get_hash(b)) {
        cout << "Same" << endl;
    }
    else{
        cout << "Different" << endl;
    }
}