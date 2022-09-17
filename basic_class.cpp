//complex number program
#include <iostream>
using namespace std;

class complex
{
    public: //access specifier
    int r; //real number
    int img; //imaginary number
};

int main()
{
    complex ob1; //ob1 is the type of class complex
    //putting values in ob1
    ob1.r = 10;
    ob1.img = 15;

    cout<<ob1.r<<endl;
    cout<<ob1.img<<endl;
    cout<<"program successful";
    return 0;
}
