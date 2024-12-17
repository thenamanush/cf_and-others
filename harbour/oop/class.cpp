#include <iostream>
using namespace std;
// creating class
class example
{
private:
    int a, b, c;

public:
    char d, e;
    void pvt(int a, int b, int c);
    void pub()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void example ::pvt(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    example check;
    check.d = 'a';
    check.e = 'b';
    check.pvt(10, 20, 30);
    check.pub();

    return 0;
}