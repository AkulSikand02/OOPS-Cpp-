#include <iostream>
using namespace std;
class abc
{
    int i,r;
public:
    abc()
    {
        r = i = 0;
    }
    abc(int p1)
    {
        r = i = p1;
    }
    abc(abc &p1)
    {
        r = p1.r;
        i = p1.i;
    }
    abc(int p1, int p2)
    {
        r = p1;
        i = p1;
    }
    void display()
    {
        cout<<r<<"+ i"<<i<<endl;
    }
    abc add(abc p1)
    {
        abc temp;
        temp.r = r + p1.r;
        temp.i = i + p1.i;
        return temp;
    }
};


int main()
{
//    abc ob1 = abc// ecplicit constructor calling
    abc ob1;// implicit constructor calling
    abc ob2(5);
    abc ob3(5,10);
    ob1.display();
    ob2.display();
    ob3.display();



    return 0;
}
