#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "hello" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "salam alaikum" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet(); // overrite base class's same named function
    }
};

int main()
{
    derived d;
    d.greet();

    return 0;
}