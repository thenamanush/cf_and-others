#include <iostream>
using namespace std;

class luccha
{
    int id;
    static int count;

public:
    void set_id()
    {
        cout << "enter id " << endl;
        cin >> id;
        count++;
    }
    void show_id()
    {
        cout << id << endl;
    }
    static void show_count()
    {
        cout << count << endl;
    }
};
int luccha::count = 1;

int main()
{
    luccha mahadi, turjo;
    luccha::show_count();
    mahadi.set_id();
    turjo.set_id();
    mahadi.show_id();
    turjo.show_id();
    luccha::show_count();
    return 0;
}