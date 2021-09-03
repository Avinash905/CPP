#include <iostream>
using namespace std;

class Complex
{
    int real,imaginary;
    public:
    void get_data()
    {
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    
    void set_data(int a,int b)
    {
        real=a;
        imaginary=b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr=new Complex;
    // (*ptr).set_data(1,54);
    ptr->set_data(1,54);
    ptr->get_data();
    
    Complex *ptr1=new Complex[4];
    ptr1->set_data(1,4);
    ptr1->get_data();

    return 0;
}
