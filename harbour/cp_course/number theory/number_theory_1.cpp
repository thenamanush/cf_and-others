#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e6;

// hooman way of finding divisors
void human(){
    int n; cin >> n;
    vector<int> divs;

    // finding divisors in O(sqrt(n)) complexity
    for(int i = 1; i * i <= n; ++i){
        if(n % i == 0){
            divs.push_back(i);
            if(i != n / i) divs.push_back(n / i);
        }
    }

    sort(divs.begin(), divs.end());
    for(auto & it : divs){
        cout << it << ' ';
    }
}

// printing numbers that has odd divisors till n
void odd_divisors(){
    ll n; cin >> n;

    for(int i = 1; i * i <= n; ++i){
        cout << i * i << ' ';
    }
}

// smallest prime factor's skeleton
void spf(ll n){
    vector<int> skel;
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0){
            while(n % i == 0){
                skel.push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1) skel.push_back(n);

    for(auto & it : skel){
        cout << it << ' ';
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //human();
    //odd_divisors();
    //spf(100);
}