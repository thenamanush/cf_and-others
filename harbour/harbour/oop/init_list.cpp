#include <iostream>
using namespace std;

class test
{
    int a, b;

public:
    test(int x, int y) : a(x), b(y)
    {
        cout << "test constructor called" << endl;
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
};
int main()
{
    test t1(10, 20);

    return 0;
}