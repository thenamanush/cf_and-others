#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<int> hsh(N, 0);

int main()
{
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        cout << hsh[x] << endl;
    }
}

// tc- O(N)