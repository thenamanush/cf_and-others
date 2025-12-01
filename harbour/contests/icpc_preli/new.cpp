#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define vi vector<int>
#define mii map<int,int>
#define mci map<char,int>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solve(){
    int n, m;

    cin >> n >> m;

    int ar[n+10][m+10];
    int r[n+10], c[m+10];
    memset(r, 0, sizeof(r));

    int mx_c = -10, mx_r = -10;
    ll sum_c = 0, sum_r = 0;

    for(int i = 0; i < n; i++){
        c[i] = 0;
        for(int j = 0; j < m; j++){
            cin >> ar[i][j];
            c[i] ^= ar[i][j];
            r[j] ^= ar[i][j];

            

            
            
        }
    }

    for(int i = 0; i < m; i++){
        // cerr << r[i] << endl;
        mx_r = max(mx_r, r[i]);
        sum_r += r[i];
    }
    for(int i = 0; i < n; i++){
        // cerr << c[i] << endl;
        mx_c = max(mx_c, c[i]);
        sum_c += c[i];
    }
    

   

    ll sum = sum_c + sum_r ;

    //  cerr  << sum << endl;

    cout << sum - (mx_c+mx_r-abs(mx_c-mx_r)) << endl;



}

int main()
{
    optimize();
    
    int t;
    cin >> t;

    while(t--)  solve();

    return 0;
}