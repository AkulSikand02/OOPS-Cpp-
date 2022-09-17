#include <iostream>
using namespace std;

class A
{
    int a;
public:
    void getdata()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    friend class B;

};

class B
{
    int b;
public:
    void showA(A& x)
    {
        cout<<"A :: a = "<<x.a;
    }
};


int main()
{
    A a;
    B b;
    a.getdata();
    b.showA(a);

    return 0;
}
