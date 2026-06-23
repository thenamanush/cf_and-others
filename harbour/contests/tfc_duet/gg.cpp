
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9 + 7;
int main()
{
    int n, m;
    cin >> n >> m;
    long long sol[m], att[m], wa[m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            char c;
            ll d;
            cin >> c >> d;
            if (c == '+')
            {
                att[i]++;
                sol[i]++;
                wa[i] += d;
            }
            else
            {
                att[i] += d;
                sol[i] += d;
                wa[i] += d;
            }
        }
        for (ll i = 0; i < m; i++)
        {
            cout << sol[i] << " " << att[i] << " " << wa[i] << endl;
        }
    }
}
