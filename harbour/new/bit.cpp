#include<bits/stdc++.h>
using namespace std;

bool pwrof2(int x)
{
    return (x && !(x & (x - 1)));
}

int main()
{
    //checking even odd in cool way
    int x;
    cin >> x;

    if(x & 1 == 1) {
        cout << "odd" << endl;
    }
    else{
        cout << "even" << endl;
    }

    //checking power of 2 in cool way
    if(pwrof2(x)) {
        cout << "power of 2" << endl;
    }
    else {
        cout << "not a power of 2" << endl;
    }

    return 0;
}