#include <iostream>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
void solve()
{
    int n, k;
    cin >> n >> k;
    int oprtn = 0;
    while (n != 0)
    {
        if (k == 1)
        {
            cout << n << endl;
            return;
        }
        else
        {

            int power = 1;
            while (power * k <= n)
            {
                power = power * k;
            }
            n = n - power;
            oprtn++;

            // if (n == 1)
            // {
            //     oprtn++;
            //     n--;
            // }
        }
    }

    cout << oprtn << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
