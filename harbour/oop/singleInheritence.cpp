#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void set()
    {
        data1 = 10;
        data2 = 20;
    }
    int get1()
    {
        return data1;
    }
    int get2()
    {
        return data2;
    }
};

class derived : public base
{
    int data3;

public:
    void process();
    void show();
};

void derived::process()
{
    data3 = data2 + get1();
}

void derived::show()
{
    cout << get1() << endl;
    cout << data2 << endl;
    cout << data3 << endl;
}
int main()
{
    derived obj;
    obj.set();
    obj.process();
    obj.show();

    return 0;
}