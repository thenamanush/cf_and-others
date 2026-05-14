#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e6 + 9;
bool f[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    auto st = clock();

    vector<ll> v;
    ll n = 25;

    for(int i = 2; i * i <= n; ++i){
        if(!f[i]){
            for(int j = i * i; j <= n; j += i){
                f[j] = true;
            }
        }
    }
    for(int i = 2; i <= n; ++i){
        if(!f[i]){
            v.push_back(i);
        }
    }

    for(auto & it : v) cout << it << ' ';
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;

    return 0;
}