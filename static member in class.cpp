#include <iostream>
using namespace std;

class abc
{
    public:
    static int a;
    int b;

};
int abc :: a=10;
int main()
{
    //a is common for all the object as a is not a part of any object so it can be accessed by name of class as cout<<abc::a;
    abc ob1,ob2,ob3;
    ob1.b=20;
    ob2.b=30;
    ob3.b=40;

    cout<<"ob1.a: "<<ob1.a<<endl;
    cout<<"ob1.b: "<<ob1.b<<endl;

    ob2.a=ob2.a+50;
    ob2.b=ob2.b-5;

    cout<<"ob2.a: "<<ob2.a<<endl;
    cout<<"ob2.b: "<<ob2.b<<endl;

    cout<<"a is not a part of any object"<<endl;
    return 0;
}
