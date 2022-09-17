#include <iostream>

using namespace std;

class complex
{
    //by default private
    int r; //data member 1
    int img; //data member 2

    public:
    void input() //method 1
    {
        cout<<"Enter complex no (real part): ";
        cin>>r;
        cout<<"Enter complex no (imaginary part): ";
        cin>>img;
    }
    void display() //method 2
    {
        cout<<"Result is: "<<r<<" +i"<<img<<endl; //complex number = a+ib
    }
};

int main()
{
    complex ob1;
    ob1.input();
    ob1.display();

    //complex ob2;
    //ob2.input();
    //ob2.display();

    return 0;
}
