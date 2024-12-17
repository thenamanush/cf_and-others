#include <bits/stdc++.h>
using namespace std;

#define alliswell ios::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    int n; cin >> n;
    string s;
    cin >> s;
    
    string all_nines = string(n, '9');
    long long nn = stoll(all_nines);
    long long num = stoll(s);
    
    long long result = nn - num;
    
    if (result == 0)
    {
        string sss(n, '1');
        long long one_added = stoll(sss) + 1;
        cout << one_added << endl;
    }
    else
    {
        cout << result << endl;
    }
}

int main()
{
    alliswell

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
