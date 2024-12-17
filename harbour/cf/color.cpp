#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void rajakar()
{
    ll n, m, k;
    cin >> n >> m >> k;

    cout << min(n,k) * min(m,k) << endl;
}

int main()
{
    alliswell

    int t;
    cin >> t;
    while (t--)
    {
        rajakar();
    }

    return 0;
}
