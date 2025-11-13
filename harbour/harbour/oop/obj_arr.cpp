#include <iostream>
using namespace std;
class employee
{
    int id, salary;

public:
    void set_id()
    {
        salary = 122;
        cout << "Enter the employee id: ";
        cin >> id;
    }
    void show_Id()
    {
        cout << "id of this employee is" << id << endl;
    }
};
int main()
{
    employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].set_id();
        fb[i].show_Id();
    }

    return 0;
}