#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e6 + 7;
int spf[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < N; ++i)
    {
        spf[i] = i;
    }
    // find the smallest prime factors
    for (int i = 2; i * i < N; ++i)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j < N; j += i)
            {
                spf[j] = min(spf[j], i);
            }
        }
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        // smallest prime factor
        cout << spf[x] << ' ';

        // find the greatest prime factor
        int gpf = 0;
        // distinct factors
        set<int> dist;
        // total number of prime factors
        int total = 0;
        int chk = x;
        while (chk > 1)
        {
            ll div = spf[chk];
            dist.insert(div);
            chk /= div;
            gpf = div;
            total++;
        }
        // greatest prime factor
        cout << gpf << ' ';
        // number of distinct prime factors
        cout << dist.size() << ' ';
        // total number of prime factors
        cout << total << ' ';

        // number if divisors
        set<int> div;
        for(int i = 1; i * i <= x; ++i){
            if(x % i == 0){
                div.insert(i);
                div.insert(x / i);
            }
        }
        cout << div.size() << ' ';
    }
}
