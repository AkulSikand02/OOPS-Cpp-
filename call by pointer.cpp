#include <iostream>
using namespace std;

void show(int *p1)
{
    cout<<*p1<<endl;
    (*p1)++;
}
int main()
{
    cout<<"WELCOME"<<endl;
    int i=10;
    cout<<i<<endl;
    show(&i);
    cout<<i<<endl;

    return 0;
}
