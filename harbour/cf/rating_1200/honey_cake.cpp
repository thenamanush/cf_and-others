#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    int x; cin >> x;
    vector<int> diva, divb, divc;

    for(int i = 1; i * i <= a; ++i) {
        if(a % i == 0) {
            diva.push_back(i);
            if((a / i) != i) {
                diva.push_back(a / i);
            }
        }
    }
    for(int i = 1; i * i <= b; ++i) {
        if(b % i == 0) {
            divb.push_back(i);
            if((b / i) != i) {
                divb.push_back(b / i);
            }
        }
    }
    for(int i = 1; i * i <= c; ++i) {
        if(c % i == 0) {
            divc.push_back(i);
            if((c / i) != i) {
                divc.push_back(c / i);
            }
        }
    }
    for(int i = 0; i < diva.size(); ++i) {
        for(int j = 0; j < divb.size(); ++j) {
            for(int k = 0; k < divc.size(); ++k) {
                if((diva[i] * divb[j] * divc[k]) == x) {
                    cout << diva[i] - 1 << ' ' << divb[j] - 1 << ' ' << divc[k] - 1 << endl; 
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
}