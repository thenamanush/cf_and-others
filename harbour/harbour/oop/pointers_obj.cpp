#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void getdata(int a, int b)
    {

        real = a;
        imaginary = b;
    }
    void display()
    {
        cout << "the real part is : " << real << endl;
        cout << "the imaginary part is : " << imaginary << endl;
    }
};
int main()
{
    complex c1; 
    complex* ptr=&c1;
    //(*ptr).getdata(10, 20); is exactly same as below
    ptr->getdata(10, 20);//arrow operator
    (*ptr).display();

    return 0;
}