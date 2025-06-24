#include<bits/stdc++.h>
using namespace std;


// swap two number without third variable
void swp(int a, int b){
    a = a ^ b;
    b = a ^ b; // a ^ b ^ b = a
    a = a ^ b; // a ^ b ^ a = b

    cout << a << " " << b << endl;
}

// checking i'th bit set or not
bool check(int x, int i){
    // return(x & (1 << i));
    return(1 & (x >> i));
}

int st(int x, int i){
    // set the i'th bit
    return(x | (1 << i));
    // unset
    return (x & ~(1 << i));
    // toggle
    return(x ^ (1 << i));


    // remove the last set bit
    return(x & (x - 1));

    // if x is power of 2 or not
    return !(x & (x - 1));

    // check even and odd
    return !(x & 1);

    // binary search trick
    int low = 0, high = 0;
    int mid = (low + high) >> 1; // right shift is div / 2

}
int main()
{
    int a, b;
    cin >> a >> b;
    swp(a, b);
    cout << check(13, 3) << endl;
    cout << st(8, 1) << endl;
}