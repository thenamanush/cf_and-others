#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "base class" << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "derived class" << var_derived << endl;
    }
};

int main()
{
    baseclass *baseclass_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    baseclass_pointer = &obj_derived;
    baseclass_pointer->display();

    return 0;
}