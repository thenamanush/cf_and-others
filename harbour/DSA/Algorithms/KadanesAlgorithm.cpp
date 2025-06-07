// maximum subarray sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    long long sum = 0, mx = LLONG_MIN;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];

        mx = max(sum, mx);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << mx << endl;
}