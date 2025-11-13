#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
    void display()
    {
        cout << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << var_derived << endl;
    }
};

int main()
{
    baseclass *baseclass_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    baseclass_pointer = &obj_derived; // pointing base class pointer to derived class

    baseclass_pointer->var_base = 88;
    baseclass_pointer->display();
    return 0;
}