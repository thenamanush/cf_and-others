#include <bits/stdc++.h>
using namespace std;

#define alliswell                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    alliswell

        int n;
    cin >> n;

    vector<long long> a(n + 1, 0);
    vector<long long> inc(n + 1, 0);

    long long sum = 0;
    int len = 1;

    a[1] = 0;

    while (n--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int i, x;
            cin >> i >> x;

            sum += 1LL * i * x;
            inc[i] += x;
        }
        else if (t == 2)
        {
            len++;
            int k;
            cin >> k;
            sum += k;
            a[len] = k;
        }
        else
        {
            sum -= a[len];
            sum -= inc[len];

            inc[len - 1] += inc[len];
            inc[len] = 0;
            len--;
        }

        cout << fixed << setprecision(10) << (double)sum / len << '\n';
    }

    return 0;
}