// Author: Shawn Das Shachin-->(shawn_das)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define pb push_back
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define OPTIMIZE_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int n;cin>>n;
    string str;
    cin>>str;
    if(str.find("2026")!= string ::npos){
        cout<<0<<endl;
    }
    else if(str.find("2026")== string ::npos && str.find("2025")== string ::npos){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

int main()
{
    OPTIMIZE_IO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
