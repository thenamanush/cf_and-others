#include <iostream>
using namespace std;

// multiple inheritance
class base1
{
protected:
    int base1_int;

public:
    void base1_fun(int a)
    {
        base1_int = a;
    }
};

class base2
{
protected:
    int base2_int;

public:
    void base2_fun(int a)
    {
        base2_int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << base1_int << endl;
        cout << base2_int << endl;
        cout << "the sum of this two is " << base1_int + base2_int << endl;
    }
};
int main()
{
    derived d;
    d.base1_fun(10);
    d.base2_fun(20);
    d.show();

    return 0;
}