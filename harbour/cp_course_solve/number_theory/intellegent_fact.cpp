#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool is_prime(int n) {
    if(n == 1) return false;

    for(int i = 2; i < n; ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    int cs = 0;

    while(t--) {
        int n; cin >> n;
        cout << "Case " << ++cs << " : " << n << " = ";
        for(int p = 2; p <= n; ++p){
            if(is_prime(p)) {
                int exp = 0;
                for(int i = 2; i <= n; ++i){
                    int x = i;
                    while(x % p == 0) {
                        ++exp;
                        x /= p;
                    }
                }
                if(p != 2) cout << " * ";
                cout << p << " (" << exp << ")";
            }
        }
        cout << '\n';
    }
}
