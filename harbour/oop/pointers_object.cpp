#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void getdata(int a, float b)
    {
        id = a;
        price = b;
    }

    void display(){
        cout<<"code of this product is "<< id
        <<"and price is "<< price<<endl;
    }
};
int main()
{
    shop* ptr = new shop[3];

    for (int i=0; i<3; i++)
    {
        
    }


    return 0;
}