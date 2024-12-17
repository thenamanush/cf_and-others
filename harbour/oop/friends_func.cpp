#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend complex sumc(complex, complex); // permission from class for sumc to acess data
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

complex sumc(complex obj1, complex obj2)
// this is a foreign functiton who is not a member of class "complex"
// friends functions used to give permission to this type of non member function to access private data
{
    complex obj3;
    obj3.set(obj1.a + obj2.a, obj1.b + obj2.b);
    return obj3;
}
int main()
{
    complex c1, c2, sum;
    c1.set(1, 2);
    c1.display();

    c2.set(3, 4);
    c2.display();

    sum = sumc(c1, c2);
    sum.display();

    return 0;
}