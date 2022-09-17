#include <iostream>
using namespace std;

void show(int i)
{
    cout<<"1st";
    cout<<i<<endl;
}
void show(float k)
{
    cout<<"2st";
    cout<<k<<endl;
}
void show(double j)
{
    cout<<"3st";
    cout<<j<<endl;
}
int main()
{
    show(10);
    show(10.5);
    return 0;
}
