#include<iostream>
using namespace std;

class Room
{
    int l,b;
public:
    void input()
    {
        l=b=0;
    }
    void input(int p1)
    {
        l=b=p1;
    }
    void input(int p1,int p2)
    {
        l=p1;
        b=p2;
    }
    int area()
    {
        return (l*b);
    }
};

int main()
{
    Room ob1;
    ob1.input();
    cout<<area();

    ob1.input(10);
    cout<<area();

    ob1.input(10,20);
    cout<<area();
    return 0;
}
