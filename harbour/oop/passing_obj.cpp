#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void sum(complex, complex);
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
void complex::sum(complex obj1, complex obj2)
{
    a = obj1.a + obj2.a;
    b = obj1.b + obj2.b;
}
int main()
{
    complex c1, c2, c3;
    c1.set(1, 2);
    c1.display();

    c2.set(3, 4);
    c2.display();

    c3.sum(c1, c2);
    c3.display();

    return 0;
}