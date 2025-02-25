#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string word;
    cin >> word;

    int sz = word.length();

    if(sz <= 10)
    {
        cout << word << endl;
    }
    else{
        cout << word[0] << sz - 2 << word[sz - 1] << endl;
    }
}
int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
