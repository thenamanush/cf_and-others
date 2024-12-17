#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRC(complex, complex);
};

class complex
{
    int a, b;
    friend class calculator;

public:
    void set(int n, int m)
    {
        a = n;
        b = m;
    }
    void show()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int calculator::sumRC(complex c1, complex c2)
{
    return ((c1.a + c2.a), (c1.b + c2.b));
}
int main()
{

    complex c1, c2;
    c1.set(1, 2);
    c2.set(3, 4);

    calculator calc;
    int res = calc.sumRC(c1, c2);
    cout << res << endl;
    return 0;
}