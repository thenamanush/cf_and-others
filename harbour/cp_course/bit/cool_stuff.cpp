#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // left shift and right shift
    int x = 8;
    cout << (x << 1) << endl; // basically doubling x
    cout << (x >> 1) << endl; // halving the number x
    
    // checking if k'th bit is on or off
    cout << ((x >> 3) & 1) << endl; // (x >> k) & 1

    // even or odd
    if(x & 1) cout << "odd" << endl; // last bit on or off
    else cout << "even" << endl;

    // turn on or off k'th bit of a number
    cout << (x | (1 << 2)) << endl; // x | (1 << k)
    cout << (x & ~ (1 << 3)) << endl; // x & ~(1 << k)

    // toggle bit or flipping the k'th bit
    cout << (x ^ (1 << 2)) << endl;
}