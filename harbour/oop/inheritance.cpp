#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee() {}
    employee(int inpID)
    {
        id = inpID;
        salary = 500.00;
    }
};

class programmer : public employee
{
public:
    char lang;
    programmer(int inpID)
    {
        id = inpID;
        lang = 'c';
    }
    void show()
    {
        cout << id << " is the id and language is " << lang << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillF(10);
    cout << skillF.lang << endl;
    cout << skillF.id << endl;
    skillF.show();
    return 0;
    return 0;
}